#include <bits/stdc++.h>
using namespace std;

class PHIEU;
class SANPHAM {
	private:
		char maSP[5];
		char tenSP[20];
		int soLuong, donGia;
	public:
		void NHAP();
		void XUAT();
		friend class PHIEU;
		int thanhTien() {
			return soLuong * donGia;
		}
		friend void sapXep(PHIEU P);
		friend void chenSP(PHIEU &P, SANPHAM k, int pos);
		friend void xoaSP(PHIEU &P);
		friend void thayDoi(PHIEU P);
};

void SANPHAM::NHAP() {
	cout << "Ma san pham: "; fflush(stdin); gets(maSP);
	cout << "Ten san pham: "; fflush(stdin); gets(tenSP);
	cout << "So luong san pham: "; cin >> soLuong;
	cout << "Don gia san pham: "; cin >> donGia;
}

void SANPHAM::XUAT() {
	cout << left << setw(20) << maSP << setw(22) << tenSP << setw(19) << soLuong << setw(21) << donGia << soLuong*donGia << endl;
}

class NCC {
	private:
		char maNCC[8];
		char tenNCC[30];
		char diaChi[30];
		char SDT[15];
	public:
		void NHAP();
		void XUAT();
};

void NCC::NHAP() {
	cout << "Ma nha cung cap: "; fflush(stdin); gets(maNCC);
	cout << "Ten nha cung cap: "; fflush(stdin); gets(tenNCC);
	cout << "Dia chi nha cung cap: "; fflush(stdin); gets(diaChi);
	cout << "So dien thoai nha cung cap: "; fflush(stdin); gets(SDT);
}

void NCC::XUAT() {
	cout << left << setw(20) << "Ma nha cung cap:" << setw(30) << maNCC << "Ten nha cung cap: " << tenNCC << endl;
	cout << left << "Dia chi: " << setw(41) << diaChi << "SDT: " << SDT << endl;
}

class PHIEU {
	private:
		char maPhieu[10];
		int ngay, thang, nam;
		NCC x;
		SANPHAM *y;
		int n;
	public:
		void NHAP();
		void XUAT();
		friend void sapXep(PHIEU P);
		friend void chenSP(PHIEU &P, SANPHAM k, int pos);
		friend void xoaSP(PHIEU &P);
		friend void thayDoi(PHIEU P);
};

void PHIEU::NHAP() {
	cout << "Ma phieu: "; fflush(stdin); gets(maPhieu);
	cout << "Ngay/thang/nam lap: "; cin >> ngay >> thang >> nam;
	x.NHAP();
	cout << "So san pham trong phong: "; cin >> n;
	y = new SANPHAM[n];
	for(int i=0; i<n; i++) {
		cout << "----Thong tin SP "<< i+1 << ":" << endl;
		y[i].NHAP();
	}
}

void PHIEU::XUAT() {
	cout << "Dai hoc Victory" << endl << "\t\t\t\tPHIEU NHAP VAN PHONG PHAM" << endl;
	cout << left << setw(20) << "Ma phieu:" << setw(25) << maPhieu << "Ngay lap: " << ngay << "/" << thang << "/" << nam << endl;
	x.XUAT();
	int tong=0;
	cout << left << setw(20) << "  Ma SP" << setw(20) << "Ten san pham" << setw(20) << "So luong" << setw(20) << "Don gia" << "Thanh tien" << endl;
	for(int i=0; i<n; i++) {
		y[i].XUAT();
		tong += y[i].soLuong * y[i].donGia;
	}
	cout << left << setw(54) << "\t\t\t\t  TONG" << tong << endl << endl;
	cout << left << setw(30) << "  Hieu truong" << setw(30) << "Phong tai chinh" << "Nguoi lap";
}

void sapXep(PHIEU P) {
	for(int i=0; i<P.n; i++) {
		for(int j=i+1; j<P.n; j++) {
			if(P.y[i].thanhTien() < P.y[j].thanhTien()) {
				SANPHAM temp = P.y[i];
				P.y[i] = P.y[j];
				P.y[j] = temp;
			}
		}
	}
}

void chenSP(PHIEU &P, SANPHAM k, int pos) {
	P.y = (SANPHAM*)realloc(P.y, (P.n+1)*sizeof(SANPHAM));
	for(int i=P.n; i>=pos; i--) {
		P.y[i] = P.y[i-1];
	}
	P.y[pos-1] = k;
	P.n++;
}


void xoaSP(PHIEU &P) {
	int m;
	cout << "Nhap vi tri muon xoa: "; cin >> m;
	while(m <= 0 || m > P.n) {
		cout << "Nhap vi tri muon xoa: "; cin >> m;
	}
	for(int i=m-1; i<P.n; i++) {
		P.y[i] = P.y[i+1];
	}
	P.y = (SANPHAM*)realloc(P.y, (P.n-1)*sizeof(SANPHAM));
	P.n--;
}

void thayDoi(PHIEU P) {
	for(int i=0; i<P.n; i++) {
		if(P.y[i].soLuong < 10) {
			P.y[i].soLuong = 10;
		}
	}
}
int main() {
	PHIEU P;
	P.NHAP();
	P.XUAT();
	cout << endl << "---------------------------" << endl;
	sapXep(P);
	P.XUAT();
	cout << endl << "---------------------------" << endl;
	SANPHAM k;
	k.NHAP();
	chenSP(P, k, 1);
	P.XUAT();
	cout << endl << "---------------------------" << endl;
	xoaSP(P);
	P.XUAT();
	cout << endl << "---------------------------" << endl;
	thayDoi(P);
	P.XUAT();
	return 0;
}