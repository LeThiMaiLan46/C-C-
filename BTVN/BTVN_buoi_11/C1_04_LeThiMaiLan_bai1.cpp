#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void nhapMang (int *a, int &n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void xuatMang (int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void tongVaTrungBinhCong (int *a, int n) {
	int tong = 0;
	int mauSo = 0;
	int tbc;
	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == 0 && a[i] % 5 == 0) {
			tong += a[i];
			mauSo++;
			tbc = tong / mauSo;
		}
	}
	if (mauSo == 0) {
		cout << "NO";
	} else {
		cout << tong << "  " << tbc;
	}
}

void xoa (int *a, int &n, int index) {
	for (int i = index; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
	a = (int*) realloc(a, (n) * sizeof(int));
}

bool soChinhPhuong (int x) {
	int sqr = sqrt(x);
	return (sqr * sqr == x);
}

void xoaSoChinhPhuong (int *a, int &n) {
	for (int i = 0; i < n; i++) {
		if (soChinhPhuong(a[i])) {
			xoa(a, n, i);
			i--;
		}
	}
}

void chen (int *a, int &n, int pos, int val) {
	n++;
	a = (int*) realloc(a, (n) * sizeof(int));
	for (int i = n-1; i >= pos; i--) {
		a[i] = a[i - 1];
	}
	a[pos] = val;
}

int timMax (int *a, int &n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int timMin (int *a, int &n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

void chenMaxTruocMin (int *a, int &n) {	
	for (int i = 0; i < n; i++) {
		if (a[i] == timMin(a, n)) {
			chen(a, n, i, timMax(a, n));
			i++;
		}
	}
}

int main () {
	int *a, n;
	a = new int[n];
	nhapMang(a, n);
	xuatMang(a, n);
	cout << endl;
	
	tongVaTrungBinhCong(a, n);
	cout << endl;
	
	xoaSoChinhPhuong(a, n);
	xuatMang(a, n);
	cout << endl;
	
	chenMaxTruocMin(a, n);
	xuatMang(a, n);
	
	delete [] a;
}

