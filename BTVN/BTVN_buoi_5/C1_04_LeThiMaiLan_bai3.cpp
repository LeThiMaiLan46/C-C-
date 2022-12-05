#include <iostream>
using namespace std;

void NhapMang(int &n, int a[]) {
	do {
		cin >> n;
	} while (n < 3 || n > 50 );
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int ViTri(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int SapXep(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] < 0 && a[j] < 0 && a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int i, n;
	int a[1000];
	NhapMang(n, a);
	ViTri(n, a);
	SapXep(n, a);
	XuatMang(n, a);
	return 0;
}
