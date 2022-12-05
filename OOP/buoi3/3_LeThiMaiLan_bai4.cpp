#include <bits/stdc++.h>
using namespace std;

class PHIEU;
class TAISAN {
	private:
		char tenTaiSan[20], tinhTrang[30];
		int soLuong;
		friend class PHIEU;
	public:
		void NHAP();
		void XUAT();
};

void TAISAN::NHAP() {
	cout << "Nhap ten tai san: "; fflush(stdin); gets(tenTaiSan);
	cout << "Nhap so luong tai san: "; cin >> soLuong;
	cout << "Nhap tinh trang tai san: "; fflush(stdin); gets(tinhTrang);
}

void TAISAN::XUAT() {
	cout << left << setw(30) << tenTaiSan << setw(30) << soLuong << setw(30) << tinhTrang << endl;
}

class PHONG {
	private:
		char phong[25], maPhong[5], truongPhong[15];
	public:
		void NHAP();
		void XUAT();
};

void PHONG::NHAP() {
	cout << "Kiem ke tai phong: "; fflush(stdin); gets(phong);
	cout << "Ma phong: "; fflush(stdin); gets(maPhong);
	cout << "Truong phong: "; fflush(stdin); gets(truongPhong);
}

void PHONG::XUAT() {
	cout << "Kiem ke tai phong: " << setw(37) << left << phong << "Ma phong:\t" << maPhong << endl;
	cout << "Truong phong: " << truongPhong << endl; 
}

class PHIEU {
	private:
		char maPhieu[10], nhanVien[15], chucVu[20];
		int ngay, thang, nam;
		int soTaiSan;
		PHONG x;
		TAISAN *y;
	public:
		void NHAP();
		void XUAT();
};

void PHIEU::NHAP() {
	cout << "Vui long nhap" << endl;
	cout << "Ma phieu: "; fflush(stdin); gets(maPhieu);
	cout << "Ngay/thang/nam kiem ke: "; cin >> ngay >> thang >> nam;
	cout << "Nhan vien kiem ke: "; fflush(stdin); gets(nhanVien);
	cout << "Chuc vu: "; fflush(stdin); gets(chucVu);
	x.NHAP();
	cout << "Nhap so tai san: "; cin >> soTaiSan;
	y = new TAISAN[soTaiSan];
	for(int i=0; i<soTaiSan; i++) {
		cout << "Nhap tai san so " << i+1 << ":" << endl;
		y[i].NHAP();
	}
}

void PHIEU::XUAT() {
	int tong = 0;
	cout << "Ma phieu:\t" << setw(40) << left << maPhieu << "Ngay kiem ke:   " << ngay << "/" << thang << "/" << nam << endl;
	cout << "Nhan vien kiem ke: " << setw(37) << left << nhanVien << "Chuc vu:\t" << chucVu << endl;
	x.XUAT();
	cout << setw(30) << left << "Ten tai san" << setw(30) << "So luong" << "Tinh trang" << endl;
	for(int i=0; i<soTaiSan; i++) {
		y[i].XUAT();
		tong += y[i].soLuong;
	}
	cout << "So tai san da kiem ke: " << soTaiSan << setw(30) << "." << "Tong so luong: " << tong; 
}

int main() {
	PHIEU A;
	A.NHAP();
	cout << setw(50) << "PHIEU KIEM KE TAI SAN" << endl;
	A.XUAT();
	return 0;
}