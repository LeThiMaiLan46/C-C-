#include <bits/stdc++.h>
using namespace std;

class PRINTER {
	protected:
		float trongLuong, tocDo;
		char hangSX[30];
		int namSX;
};

class DOTPRINTER : public PRINTER {
	int matDoKim;
	public:
		void NHAP();
		void XUAT();
};
void DOTPRINTER::NHAP() {
	cout << "Nhap trong luong may: "; cin >> trongLuong;
	cout << "Nhap hang san xuat: "; fflush(stdin); gets(hangSX);
	cout << "Nhap nam san xuat: "; cin >> namSX;
	cout << "Nhap mat do kim: "; cin >> matDoKim;
}
void DOTPRINTER::XUAT() {
	cout << "Trong luong may: " << trongLuong << endl;
	cout << "Hang san xuat: " << hangSX << endl;
	cout << "Nam san xuat: " << namSX << endl;
	cout << "Mat do kim: " << matDoKim << endl;
}

class LASERPRINTER : public PRINTER {
	float doPhanGiai;
	public:
		void NHAP();
		void XUAT();
};
void LASERPRINTER::NHAP() {
	cout << "Nhap trong luong may: "; cin >> trongLuong;
	cout << "Nhap hang san xuat: "; fflush(stdin); gets(hangSX);
	cout << "Nhap nam san xuat: "; cin >> namSX;
	cout << "Nhap do phan giai: "; cin >> doPhanGiai;
}
void LASERPRINTER::XUAT() {
	cout << "Trong luong may: " << trongLuong << endl;
	cout << "Hang san xuat: " << hangSX << endl;
	cout << "Nam san xuat: " << namSX << endl;
	cout << "Do phan giai: " << doPhanGiai << endl;
}

int main() {
	int n;
	LASERPRINTER *a;
	cout << "Nhap so may in laser: "; cin >> n;
	a = new LASERPRINTER[n];
	for(int i=0; i<n; i++) {
		cout << "Nhap thong tin may in laser so " << i+1 << endl;
		a[i].NHAP();
	}
	
	DOTPRINTER A;
	cout << "Nhap thong tin may in kim: " << endl;
	A.NHAP();
	
	cout << "==============================" << endl;
	cout << "------Thong tin may in kim:" << endl;
	A.XUAT();
	for(int i=0; i<n; i++) {
		cout << "-----Thong tin may in laser so " << i+1 << endl;
		a[i].XUAT();
	}
	return 0;
}