#include <bits/stdc++.h>
using namespace std;

class BenhNhan;
class Nguoi {
	protected:
		char hoTen[15];
		int tuoi;
	public:
		void Nhap();
		void Xuat();
		friend class BenhNhan;
		friend bool checkTuoi(BenhNhan a);
		friend bool checkMa(BenhNhan a);
};
void Nguoi::Nhap() {
	cout << "Ho va ten: "; fflush(stdin); gets(hoTen);
	cout << "Tuoi: "; cin >> tuoi;
}
void Nguoi::Xuat() {
	cout << "Ho va ten: " << hoTen << endl;
	cout << "Tuoi: " << tuoi << endl;
}

class BenhVien {
	char tenBV[15];
	char diaChi[20];
	char giamDoc[15];
	friend class BenhNhan;
};

class BenhNhan : public Nguoi {
	protected:
		char ma[5];
		char tienSu[10];
		char chuanDoan[10];
		BenhVien x;
	public:
		void Nhap();
		void Xuat();
		friend bool checkMa(BenhNhan a);

};
void BenhNhan::Nhap() {
	Nguoi::Nhap();
	cout << "Ma: ";					fflush(stdin);		gets(ma);
	cout << "Tien su benh: ";		fflush(stdin);		gets(tienSu);
	cout << "Chuan doan benh: ";	fflush(stdin);		gets(chuanDoan);
	cout << "Ten benh vien: "; 		fflush(stdin);		gets(x.tenBV);
	cout << "Dia chi benh vien: "; 	fflush(stdin); 		gets(x.diaChi);
	cout << "Giam doc benh vien: ";	fflush(stdin);		gets(x.giamDoc);
}
void BenhNhan::Xuat() {
	Nguoi::Xuat();
	cout << left << setw(15) << "Ma benh nhan" << setw(15) << "Tien su benh" << "Chuan doan benh" << endl;
	cout << left << setw(15) << ma << setw(15) << tienSu << chuanDoan << endl;
	cout << "Ten benh vien: " << x.tenBV << endl; 
	cout << "Dia chi benh vien: " << x.diaChi << endl;
	cout << "Giam doc benh vien: " << x.giamDoc << endl;
}

bool checkTuoi(BenhNhan a) {
	if(a.tuoi > 30) {
		return 1;
	} else {
		return 0;
	}
}

bool checkMa(BenhNhan a) {
		if(strcmp(a.ma, "BN01") == 0) {
			return 1;
		} else {
			return 0;
		}
}

int main() {
	int n;
	cout << "Nhap so luong benh nhan: "; cin >> n;
	BenhNhan *A = new BenhNhan[n];
	for(int i=0; i<n; i++) {
		cout << "Nhap thong tin benh nhan so " << i+1 << endl;
		A[i].Nhap();
	}
	cout << "===============================" << endl;
	for(int i=0; i<n; i++) {
		cout << "---- Thong tin benh nhan so " << i+1 << endl;
		A[i].Xuat();
	}
	
	int dem=0;
	for(int i=0; i<n; i++) {
		if(checkTuoi(A[i]) == 1) {
			dem++;
		}
	}
	if(dem != 0) {
		cout << "Co " << dem << " benh nhan > 30 tuoi" << endl;
	} else {
		cout << "Khong co benh nhan nao > 30 tuoi";
	}
	
	/*
	y 3 em khum biet lam a :>
	for(int i=0; i<n; i++) {
		if(checkTuoi(A[i]) == 1) {
			A[i].tuoi = 20;
			cout << "---- Thong tin benh nhan co ma BN01 sau khi sua la:" << endl;
			A[i].Xuat();
		 }
	}
	*/
	return 0;
}