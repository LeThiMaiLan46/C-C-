#include <iostream>
#include <stdlib.h>

using namespace std;

void nhapDay(float *a, int &n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
		if (*(a+i) == -1 || i > 49) {
			n = i;
		}
	}
}

void xuatDay(float *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a+i) << " ";
	}
}

void xoa(float *a, int &n, int index) {
	for (int i=index; i < n; i++) {
		*(a+i) = *(a+i+1);
	}
	n--;
}

void xoaSo(float *a, int &n) {
	for (int i=0; i < n-1; i++) {
		for (int j=i+1; j < n; j++) {
			if (a[i] == a[j]){
				xoa(a, n, j);
				a = (float *)realloc(a,(n-1)*sizeof(float));
				i--;
			}
		}
	}
}

int main () {
	int n = 50;
	float *a;
	a = new float[n];
	nhapDay(a, n);
	xuatDay(a, n);
	cout << endl;
	
	xoaSo(a, n);
	xuatDay(a, n);
	cout << endl;

	int m=0;
	float *b;
	for (int i=0; i < n; i++) {
		if (*(a+i) > 0) {
			m++;
		}
	}
	b = new float(m);
	for (int i=0; i < n; i++) {
			if (*(a+i) > 0) {
				*(b+i) = *(a+i);
				cout << *(b+i) << " ";
			}
	}
	cout << endl;
	
	int y=0;
	float *c;
	for (int i=0; i < n; i++) {
		if (*(a+i) < 0) {
			y++;
		}
	}
	c = new float(y);
	for (int i=0; i < n; i++) {
			if (*(a+i) < 0) {
				*(c+i) = *(a+i);
				cout << *(c+i) << " ";
			}
	}
	
	delete [] a;
	delete [] b;
	delete [] c;
	return 0; 
}


