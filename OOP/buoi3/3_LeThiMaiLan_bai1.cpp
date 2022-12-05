#include <bits/stdc++.h>
using namespace std;

class FACULTY;
class SCHOOL {
	private:
		char tenTruong[20];
		int ngayTruong, thangTruong, namTruong;
		friend class FACULTY;
};

class FACULTY {
	private:
		char tenKhoa[20];
		int ngayKhoa, thangKhoa, namKhoa;
		SCHOOL x;
		friend class STUDENT;
	public:
		void input();
		void output();
		FACULTY();
};

void FACULTY::input() {
	cout << "Nhap ten truong: "; fflush(stdin); gets(x.tenTruong);
	cout << "Nhap ngay/thang/nam thanh lap truong: ";
	cin >> x.ngayTruong >> x.thangTruong >> x.namTruong;
	cout << "Nhap ten khoa: "; fflush(stdin); gets(tenKhoa);
	cout << "Nhap ngay/thang/nam thanh lap khoa: ";
	cin >> ngayKhoa >> thangKhoa >> namKhoa;
}

void FACULTY::output() {
	cout << "Ten truong: " << x.tenTruong << endl << "Ten khoa: " << tenKhoa << endl;
	cout << "Ngay thanh lap truong: " << x.ngayTruong << "/" << x.thangTruong << "/" << x.namTruong << endl;
	cout << "Ngay thanh lap khoa: " << ngayKhoa << "/" << thangKhoa << "/" << namKhoa << endl;
}

FACULTY::FACULTY() {
	x.tenTruong[0] = '\0';
	x.ngayTruong = 0;
	x.thangTruong = 0;
	x.namTruong = 0;
	tenKhoa[0] = '\0';
	ngayKhoa = 0;
	thangKhoa = 0;
	namKhoa = 0;
}
class STUDENT {
	private:
		FACULTY y;
		char lop[10];
		int diem;
	public:
		void input();
		void output();
		STUDENT();
		~STUDENT();
};

void STUDENT::input() {
	cout << "Nhap lop: "; fflush(stdin); gets(lop);
	cout << "Nhap diem: "; cin >> diem;
	y.input();
}

void STUDENT::output() {
	cout <<  "Lop: " << lop << endl << "Diem: " << diem << endl;
	y.output();
}

STUDENT::STUDENT() {
	lop[0] = '\0';
	diem = 0;
	FACULTY();
}

STUDENT::~STUDENT() {
	cout << "Da huy ";
}

int main() {
	int n;
	STUDENT b;
	b.output();
	cout << "------------------" << endl;
	cout << "Nhap so sinh vien: "; cin >> n;
	STUDENT *a = new STUDENT[n];
	for(int i=0; i<n; i++) {
		cout << "Nhap du lieu cho sinh vien so: " << i+1 << endl;
		a[i].input();
	}
	cout << "-----------------" << endl;
	for(int i=0; i<n; i++) {
		cout << "+) Sinh vien so: " << i+1 << endl;
		a[i].output();
	}
	delete[] a;
	return 0;
}
