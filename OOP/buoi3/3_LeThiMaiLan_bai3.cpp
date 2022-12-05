#include <bits/stdc++.h>
using namespace std;

class NCC {
	private:
		char maNCC[10], tenNCC[25], diaChi[100];
		friend class PHIEU;
	public:
		void NHAP();
		void XUAT();
};

void NCC::NHAP() {
	cout << "Nhap ma NCC: "; fflush(stdin); gets(maNCC);
	cout << "Nhap ten NCC: "; fflush(stdin); gets(tenNCC);
	cout << "Nhap dia chi: "; fflush(stdin); gets(diaChi);
}

void NCC::XUAT() {
	cout << left << setw(10) << "   Ma NCC:  " << setw(30) << maNCC << "Ten NCC:  " << tenNCC << endl;
	cout << left << "   Dia chi:  " << diaChi << endl;
}

class HANG {
	char tenHang[10];
	float donGia;
	int soLuong;
	friend class PHIEU;
	public:
		void NHAP();
		void XUAT();
};

void HANG::NHAP() {
	cout << "Nhap ten hang: "; fflush(stdin); gets(tenHang);
	cout << "Nhap don gia: ";
	cin >> donGia;
	cout << "Nhap so luong: ";
	cin >> soLuong;
}

void HANG::XUAT() {
	cout << left << setw(23) << tenHang << setw(20) << donGia << setw(20) << soLuong << setw(20) << (float)donGia*soLuong << endl;
}

class PHIEU {
	private:
		char maPhieu[10];
		int ngay, thang, nam;
		int soHang;
		NCC x;
		HANG *a;
	public:
		void NHAP();
		void XUAT();
};

void PHIEU::NHAP() {
	cout << "Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout << "Nhap ngay/thang/nam lap: ";
	cin >> ngay >> thang >> nam;
	x.NHAP();
	cout << "Nhap so mat hang: ";
	cin >> soHang;
	a = new HANG[soHang];
	for(int i=0; i<soHang; i++) {
		cout << "Mat hang "<< i+1 << ":" << endl;
		a[i].NHAP();
	}
}

void PHIEU::XUAT() {
	float tong=0;
	cout << left << "\t\tPHIEU NHAP HANG" << endl;
	cout << left << setw(10) << "   Ma phieu:  " << setw(28) << maPhieu << "Ngay lap:  " << ngay << "/" << thang << "/" << nam << endl;
	x.XUAT();
	cout << left << setw(20) << " Ten hang" << setw(20) << "Don gia" << setw(20) << "So luong" << setw(20) << "Thanh tien" << endl;
	for(int i=0; i<soHang; i++) {
		tong += (float) a[i].donGia*a[i].soLuong;
		a[i].XUAT();
	}
	cout << "\t\t\t\t\tCong thanh tien   \t" << tong;
}

int main() {
	PHIEU A;
	A.NHAP();
	A.XUAT();
	return 0;
}
