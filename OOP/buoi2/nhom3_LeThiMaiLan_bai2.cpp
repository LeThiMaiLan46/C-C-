#include <bits/stdc++.h>
using namespace std;

class NSX {
	char maNSX[10];
	char tenNSX[15];
	char dcNSX[15];
	public:
		void NHAP();
		void XUAT();
};
void NSX::NHAP() {
	cout << "Nhap ma NSX: ";
	fflush(stdin); gets(maNSX);
	cout << "Nhap ten NSX: ";
	fflush(stdin); gets(tenNSX);
	cout << "Nhap dc NSX: ";
	fflush(stdin); gets(dcNSX);
}
void NSX::XUAT() {
	cout << left << setw(15) << "Ma NSX:" << setw(15) << "Ten NSX:" << setw(15) << "Dc NSX:" << endl;
	cout << left << setw(15) << maNSX << setw(15) << tenNSX << setw(15) << dcNSX << endl;
}
class HANG {
	char maHang[15];
	char tenHang[15];
	NSX x;
	public:
		void NHAP();
		void XUAT();
};
void HANG::NHAP() {
	cout << "Nhap ma hang: ";
	fflush(stdin); gets(maHang);
	cout << "Nhap ten hang: ";
	fflush(stdin); gets(tenHang);
	x.NHAP();
}
void HANG::XUAT() {
	cout << left << setw(15) << "Ma hang: " << setw(15) << "Ten hang: " << endl;
	cout << left << setw(15) << maHang << setw(15) << tenHang << endl;
	x.XUAT();
}
int main() {
	HANG a;
	a.NHAP();
	a.XUAT();
	return 0;
}
