#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;

void InPut(int *a, int &n){
	cout << "Nhap n: ";
	do{
		cin >> n;
	}while(n < 1 || n > 50);
	
	for(int i = 0; i < n; i++){
		cout << "a["<<i<<"] = "; 
			cin >> a[i];
    }
}

void OutPut(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

void Max2(int *a, int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	int min = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	int max2 = min;
	for(int i = 0; i < n; i++){
		if(a[i] == max){
			continue;
		}else if(a[i] > max2){
			max2 = a[i];	
			}
	}
    cout << endl << max2 << endl;
}
void Chen(int *a, int &n, int x, int pos){
	for(int i = n; i > pos; i--){
		a[i] = a[i-1];
	}
	a[pos+1] = x;
	n++;
}
int main(){
	int n;
	int *a = (int *)malloc(n * sizeof(int));
	InPut(a, n);
	OutPut(a, n);
	cout << endl;
	int average = 0;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < 0 && abs(a[i]) < 8){
			cnt++;
			average += a[i];
			cout << a[i] << " ";
		}
	}
	if (cnt == 0) {
		cout << "0";
	}
	cout << endl << "TBC = " << average/cnt;
	Max2(a, n);
	int x;
	cout << "Nhap x: ";
	cin >> x;
	for(int i = 0; i < n; i++){
		if(a[i] < x){
    		a = (int *)realloc(a,(n+1)*sizeof(int));
			Chen(a, n, x, i);
			i++;
		}
	}
	OutPut(a, n);
	
	return 0;
}
