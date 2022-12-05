#include <bits/stdc++.h>
using namespace std;

class QUANLY {
	int maQL;
	char hoTen[15];
	public:
		void NHAP();
		void XUAT();
};
void QUANLY::NHAP() {
	cout << "Nhap ma quan ly: ";
	cin >> maQL;
	cout << "Nhap ho va ten quan ly: ";
	fflush(stdin); gets(hoTen);
}
void QUANLY::XUAT() {
	cout << "Ma quan ly: " << maQL << endl;
	cout << "Ho va ten quan ly: " << hoTen << endl;
}
class MAY {
	char maMay[10];
	char kieuMay[10];
	char tinhTrang[10];
	public:
		void NHAP();
		void XUAT();
};
void MAY::NHAP() {
	cout << "Nhap ma may: ";
	fflush(stdin); gets(maMay);
	cout << "Nhap kieu may: ";
	fflush(stdin); gets(kieuMay);
	cout << "Nhap tinh trang may: ";
	fflush(stdin); gets(tinhTrang);
}
void MAY::XUAT() {
	cout << "Ma may: " << maMay << endl;
	cout << "Kieu may: " << kieuMay << endl;
	cout << "Tinh trang: " << tinhTrang << endl;
}
class PHONGMAY {
	char maPhong[10];
	char tenPhong[10];
	float dienTich;
	int n;
	QUANLY x;
	MAY *y;
	public:
		void NHAP();
		void XUAT();
};
void PHONGMAY::NHAP() {
	cout << "Nhap ma phong: ";
	fflush(stdin); gets(maPhong);
	cout << "Nhap ten phong: ";
	fflush(stdin); gets(tenPhong);
	cout << "Nhap dien tich: ";
	cin >> dienTich;
	x.NHAP();
	cout << "Nhap n = ";
	cin >> n;
	y = new MAY[n];
	for(int i=0; i<n; i++) {
		cout << " * Nhap thong tin may so " << i+1 << endl;
		y[i].NHAP();
	}
}
void PHONGMAY::XUAT() {
	cout << "Ma phong: " << maPhong << endl;
	cout << "Ten phong: " << tenPhong << endl;
	cout << "Dien tich: " << dienTich << endl;
	x.XUAT();
	for(int i=0; i<n; i++) {
		cout << " * Thong tin may so " << i+1 << endl;
		y[i].XUAT();
	}
};
int main () {
	PHONGMAY a;
	a.NHAP();
	cout << endl << "-------------------" << endl;

	a.XUAT();
	return 0;
}
