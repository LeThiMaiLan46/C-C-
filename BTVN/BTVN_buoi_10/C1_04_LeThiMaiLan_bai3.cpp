#include <iostream>
#include <stdlib.h>

using namespace std;

void nhapDay(int *a, int &n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
	}
}

void xuatDay(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a+i) << " ";
	}
}

void doiViTri(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void sapXepDay(int *a, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (*(a+i) > *(a+j)) {
				doiViTri(*(a+i), *(a+j));
			}
		}
	}
}

void xoaSo(int *a, int &n, int index) {
	for (int i = index; i < n; i++) {
		*(a+i) = *(a+i+1);
	}
	n--;
}

void daySoDuong(int *a, int n) {
	int soLanSapXep=0;
	for (int i = 0; i < n; i++) {
		if (*(a+i) < 0) {
			*(a+i) = abs(*(a+i));
			i--;
			soLanSapXep++;
		}
		sapXepDay(a, n);
	}
	xuatDay(a, n);
	cout << endl;
	cout << soLanSapXep << endl;
	xoaSo(a, n, soLanSapXep);
	xuatDay(a, n);
}

int tinhTongVTChan(int *a, int n) {
	int tongVTChan = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			tongVTChan += *(a+i);
		}
	}
	cout << tongVTChan << endl;
	return tongVTChan;
}

int tinhTongVTLe(int *a, int n) {
	int tongVTLe = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			tongVTLe += *(a+i);
		}
	}
	cout << tongVTLe << endl;
	return tongVTLe;
}

int timUCLN(int x, int y) {
	while (x * y != 0) {
		if (x > y) {
			x %= y;
		} else {
			y %= x;
		}
	}
	cout << x + y;
	return x + y;
}

void tuoi(int tongVTChan, int tongVTLe, int UCLN) {
	int s = tongVTLe + tongVTChan;
	int hieu = s - 18 * UCLN;
	if (hieu > 0) {
		cout << "False";
	} else {
		cout << "True";
	}
}
int main () {
	int *a;
	int n;
	cin >> n;
	a = new int(n);
	nhapDay(a, n);
	sapXepDay(a, n);
	xuatDay(a, n);
	cout << endl;
	
	daySoDuong(a, n);
	cout << endl;
	
	int tongVTChan, tongVTLe;
	tongVTChan = tinhTongVTChan(a, n);
	tongVTLe = tinhTongVTLe(a, n);
	
	int UCLN;
	UCLN = timUCLN(tongVTChan, tongVTLe);
	cout << endl;
	
	tuoi(tongVTChan, tongVTLe, UCLN);
	
	delete [] a;
}
