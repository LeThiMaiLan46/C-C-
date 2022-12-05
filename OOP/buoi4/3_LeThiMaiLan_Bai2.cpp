#include <bits/stdc++.h>
using namespace std;

class PHIEU;
class HANG {
	private:
		char tenHang[20];
		int donGia, soLuong;
	public:
		void NHAP();
		void XUAT();
		friend class PHIEU;
		int thanhTien() {
			return donGia*soLuong;
		}
		friend void sapXep(PHIEU A);
		friend void timRau(PHIEU A);
		friend void xoaHang(PHIEU &A);
};

void HANG::NHAP() {
	cout << "Ten mat hang: "; fflush(stdin); gets(tenHang);
	cout << "Don gia: "; cin >> donGia;
	cout << "So luong: "; cin >> soLuong;
}

void HANG::XUAT() {
	cout << left << setw(20) << tenHang << setw(19) << donGia << setw(19) << soLuong << donGia*soLuong << endl; 
}

class NGUOI {
	private:
		char ten[20];
		char SDT[15];
		char diaChi[100];
	public:
		void NHAP();
		void XUAT();
};

void NGUOI::NHAP() {
	cout << "Ho va ten nguoi di cho: "; fflush(stdin); gets(ten);
	cout << "So dien thoai nguoi di cho: "; fflush(stdin); gets(SDT);
	cout << "Dia chi nguoi di cho: "; fflush(stdin); gets(diaChi);
}

void NGUOI::XUAT() {
	cout << left << setw(25) << "Ho va ten nguoi di cho:" << ten << endl;
	cout << left << setw(15) << "So dien thoai:" << SDT << endl;
	cout << left << setw(11) << "Dia chi:" << diaChi << endl;
}

class PHIEU {
	private:
		char maPhieu[5];
		char ngay[15];
		NGUOI x;
		HANG *y;
		int n;
	public:
		void NHAP();
		void XUAT();
		friend void sapXep(PHIEU A);
		friend void timRau(PHIEU A);
		friend void xoa(PHIEU &A, int pos);
		friend void xoaHang(PHIEU &A);
};

void PHIEU::NHAP() {
	cout << "Ma phieu: "; fflush(stdin); gets(maPhieu);
	cout << "Nhap ngay theo dinh dang(ngay/thang/nam): "; fflush(stdin); gets(ngay);
	x.NHAP();
	cout << "Nhap so luong mat hang: "; cin >> n;
	y = new HANG[n];
	for(int i=0; i<n; i++) {
		cout << "=====Mat hang so " << i+1 << endl;
		y[i].NHAP();
	}
}

void PHIEU::XUAT() {
	cout << "\t\t\tPHIEU DI CHO" << endl;
	cout << left << setw(11) << "Ma phieu:" << setw(25) << maPhieu << "Ngay: " << ngay << endl;
	x.XUAT();
	int tong;
	cout << left << setw(19) << "Ten hang" << setw(19) << "Don gia" << setw(19) << "So luong" << "Thanh tien" << endl;
	for(int i=0; i<n; i++) {
		y[i].XUAT();
		tong += y[i].donGia * y[i].soLuong;
	}
	cout << "\t\t\t\t      Cong thanh tien:    " << tong;
}

void sapXep(PHIEU A) {
	for(int i=0; i<A.n; i++) {
		for(int j=i+1; j<A.n; j++) {
			if(A.y[i].thanhTien() > A.y[j].thanhTien()) {
				HANG temp = A.y[i];
				A.y[i] = A.y[j];
				A.y[j] = temp;
			}
		}
	}
}

void timRau(PHIEU A) {
	int dem=0;
	for(int i=0; i<A.n; i++) {
		if(strcmp(A.y[i].tenHang, "Rau") == 0) {
			dem++;
		}
	}
	if(dem == 0) {
		cout << "KHONG CO Rau NHA" << endl;
	} else {
		cout << "CO Rau NHAAA! MAI DZO!!" << endl;
		for(int i=0; i<A.n; i++) {
		if(strcmpi(A.y[i].tenHang, "Rau") == 0) {
			A.y[i].XUAT();
			cout << endl;
		}
	}
	}
}

void xoa(PHIEU &A, int pos) {
	for(int i=pos-1; i<A.n; i++) {
		A.y[i] = A.y[i+1];
	}
	A.y = (HANG*)realloc(A.y, (A.n-1)*sizeof(HANG));
	A.n--;
}

void xoaHang(PHIEU &A) {
	for(int i=0; i<A.n; i++) {
		if(A.y[i].soLuong < 5) {
			xoa(A, i+1);
			i--;
		}
	}
}
int main() {
	PHIEU A;
	A.NHAP();
	A.XUAT();
	cout << endl << "----------------------------" << endl;
	sapXep(A);
	A.XUAT();
	cout << endl << "----------------------------" << endl;
	timRau(A);
	cout << "----------------------------" << endl;
	xoaHang(A);
	A.XUAT();
	return 0;
}