#include <iostream>
using namespace std;

void NhapSo(int &n) {
	do {
		cin >> n;
	} while (n <= 0);
}

bool KiemTra(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void TachSo(int n) {
	int soLuong = 0;
	int a[1000];
	while (n) {
		int du = n % 10;
		if (KiemTra(du) == 1) {
			a[soLuong] = du;
			soLuong++;
		}
		n = n / 10;
	}
	cout << soLuong << endl;
	for (int i = 0; i < soLuong; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	int n;
	NhapSo(n);
	TachSo(n);
	return 0;
}
