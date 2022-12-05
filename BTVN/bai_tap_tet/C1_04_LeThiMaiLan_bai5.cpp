#include <iostream>

using namespace std;

void nhapMang(int &n, int a[]) {
	do {
		cin >> n;
	} while (n<=3 || n>100);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
}

void xuatMang(int n, int a[]) {
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

void doiViTri(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void sapXep(int n, int a[]) {
	for (int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if (a[i] % 2 == 0 && a[j] % 2 != 0) {
				doiViTri(a[i], a[j]);
			}
			else if(a[i] % 2!=0 && a[j] %2 !=0 && a[i] < a[j]) {
				doiViTri(a[i], a[j]);
			}
			else if(a[i] % 2==0 && a[j] == 0) {
				doiViTri(a[i], a[j]);
			}
			else if(a[i] % 2==0 && a[j] %2 ==0 && a[i] > a[j] && a[i] !=0 && a[j] !=0) {
				doiViTri(a[i], a[j]);
			}
		}
	}
}
			
int main() {
	int a[1000];
	int n;
	nhapMang(n, a);
	sapXep(n, a);
	xuatMang(n, a);
	return 0;
}
