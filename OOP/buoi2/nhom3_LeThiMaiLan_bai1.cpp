#include <bits/stdc++.h>
using namespace std;

class HANG{
	char maHang[10];
	char tenHang[15];
	int donGia;
	int soLuong;
	public:
		void NHAP();
		void XUAT();
};
void HANG::NHAP() {
	cout << "Nhap ma hang: ";
	fflush(stdin); gets(maHang);
	cout << "Nhap ten hang: ";
	fflush(stdin); gets(tenHang);
	cout << "Nhap don gia: ";
	cin >> donGia;
	cout << "Nhap so luong: ";
	cin >> soLuong;
}
void HANG::XUAT() {
	cout << left << setw(10) << "Ma hang:" << setw(10) << "Ten hang:" << setw(10) << "Don gia:" << setw(10) << "So luong:" << setw(10) << "Thanh tien:" << endl;
	cout << left << setw(10) << maHang << setw(10) << tenHang << setw(10) << donGia << setw(10) << soLuong << setw(10) << donGia*soLuong << endl;
}
int main() {
	int n;
	cout << "Nhap n = ";
	cin >> n;
	HANG *a = new HANG[n];
	for(int i=0; i<n; i++) {
		a[i].NHAP();
		a[i].XUAT();
	}
	return 0;
}
