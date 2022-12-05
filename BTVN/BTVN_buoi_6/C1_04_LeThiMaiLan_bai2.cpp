#include <iostream>
using namespace std;

void NhapMang(int a[], int &n) {
	cin >> n;
	while (n < 1 || n >= 100) {
		cin >> n;
	}
	cout << "nhap mang\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void XuatMang(int a[], int &n) {
	cout << "xuat mang ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int Chenx(int x, int a[], int &n, int index) {
	for (int i = n; i > index; i--) {
		a[i] = a[i-1];
	}
	a[index] = x;
	n++;
}

int Ham1(int &x, int a[], int &n) {
	cout << "nhap x = ";
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7) {
			Chenx(x, a, n, i+1);
		}
	}
}

int XoaPhanTu(int a[], int &n, int index) {
	for (int i = index; i < n; i++) {
		a[i] = a[i+1];
	}
	n--;
}

int Ham2(int a[], int &n) {
	for (int i=0; i < n; i++) {
		if (a[i] % 3 == 0 && a[i] % 5 != 0) {
			XoaPhanTu(a, n, i);
			i--;
		}
	}
}

int Ham3(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--) {
			if (a[i] == a[j]) {
				XoaPhanTu(a, n, j);
			}
		}
	}
}

int main() {
	int n, x;
	int a[1000];
	NhapMang(a,n);
	Ham1(x, a, n);
	Ham2(a, n);
	Ham3(a, n);
	XuatMang(a, n);
}
