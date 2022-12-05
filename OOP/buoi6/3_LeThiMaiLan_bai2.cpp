#include <bits/stdc++.h>
using namespace std;

class TRUONGDH;
class KHOA {
	private:
		char maKhoa[5];
		char tenKhoa[15];
		char truongKhoa[15];
		friend class TRUONGDH;
};

class BAN {
	private:
		char maBan[5];
		char tenBan[15];
		char ngayThanhLap[11];
		friend class TRUONGDH;
};

class TRUONG {
	protected:
		char maTruong[5];
		char tenTruong[15];
		char diaChi[20];
	public:
		void NHAP();
		void XUAT();
};
void TRUONG::NHAP() {
	cout << "Ma truong: "; fflush(stdin); gets(maTruong);
	cout << "Ten truong: "; fflush(stdin); gets(tenTruong);
	cout << "Dia chi: "; fflush(stdin); gets(diaChi);
}
void TRUONG::XUAT() {
	cout << "Ma truong: " << maTruong << endl;
	cout << "Ten truong: " << tenTruong << endl;
	cout << "Dia chi: " << diaChi << endl;
}

class TRUONGDH : public TRUONG {
	private:
		KHOA *x;
		int n;
		BAN *y;
		int m;
	public:
		void NHAP();
		void XUAT();
};
void TRUONGDH::NHAP() {
	TRUONG::NHAP();
	cout << "Nhap so Khoa: "; cin >> n;
	x = new KHOA[n];
	for(int i=0; i<n; i++) {
		cout << "* Nhap thong tin Khoa so " << i+1 << endl;
		cout << "Ma khoa: "; fflush(stdin); gets(x[i].maKhoa);
		cout << "Ten khoa: "; fflush(stdin); gets(x[i].tenKhoa);
		cout << "Truong khoa: "; fflush(stdin); gets(x[i].truongKhoa);
	}
	cout << "Nhap so ban: "; cin >> m;
	y = new BAN[m];
	for(int j=0; j<m; j++) {
		cout << "* Nhap thong tin Ban so " << j+1 << endl;
		cout << "Ma ban: "; fflush(stdin); gets(y[j].maBan);
		cout << "Ten ban: "; fflush(stdin); gets(y[j].tenBan);
		cout << "Ngay thanh lap ban: "; fflush(stdin); gets(y[j].ngayThanhLap);
	}
}
void TRUONGDH::XUAT() {
	TRUONG::XUAT();
	cout << "* Thong tin cac Khoa:" << endl;
	cout << left << setw(10) << "Ma khoa" << setw(10) << "Ten khoa" << "Truong khoa" << endl;
	for(int i=0; i<n; i++) {
		cout << left << setw(10) << x[i].maKhoa << setw(10) << x[i].tenKhoa << x[i].truongKhoa << endl;
	}
	cout << "* Thong tin cac Ban:" << endl;
	cout << left << setw(10) << "Ma ban" << setw(10) << "Ten ban" << "Ngay thanh lap" << endl;
	for(int j=0; j<m; j++) {
		cout << left << setw(10) << y[j].maBan << setw(10) << y[j].tenBan << y[j].ngayThanhLap << endl;
	}
}

int main() {
	TRUONGDH A;
	A.NHAP();
	cout << "===========================" << endl;
	A.XUAT();
	
	return 0;
}
