#include <bits/stdc++.h>
using namespace std;

class STUDENT;
class FACULTY;
class SCHOOL {
	private:
		char nameS[30];
		char dateS[11];
		friend class FACULTY;
};

class FACULTY {
	private:
		char nameF[30];
		char dateF[11];
		SCHOOL x;
	public:
		void input();
		void output();
		friend class STUDENT;
};
void FACULTY::input() {
	cout << "Ten truong: "; fflush(stdin); gets(x.nameS);
	cout << "Ngay/thang/nam thanh lap truong: "; fflush(stdin); gets(x.dateS);
	cout << "Ten khoa: "; fflush(stdin); gets(nameF);
	cout << "Ngay/thang/nam thanh lap khoa: "; fflush(stdin); gets(dateF);
}
void FACULTY::output() {
	cout << "Sinh vien truong: " << x.nameS << endl;
	cout << "Ngay thanh lap truong: " << x.dateS << endl;
	cout << "Sinh vien khoa: " << nameF << endl;
	cout << "Ngay thanh lap khoa: " << dateF << endl;
}

class PERSON {
	protected:
		char name[20];
		int d, m, y;
		char address[30];
	public:
		void input();
		void output();
		PERSON();
};
void PERSON::input() {
	cout << "Ho va ten: "; fflush(stdin); gets(name);
	cout << "Ngay/thang/nam sinh: "; cin >> d >> m >> y;
	cout << "Dia chi: "; fflush(stdin); gets(address);
}
void PERSON::output() {
	cout << "Ho va ten sinh vien: " << name << endl;
	cout << "Ngay/thang/nam sinh: " << d << "/" << m << "/" << y << endl;
	cout << "Dia chi: " << address << endl;
}
PERSON::PERSON() {
	strcpy(name, " ");
	this->d = 0;
	this->m = 0;
	this->y = 0;
	strcpy(address, " ");
}

class STUDENT : public PERSON {
	private:
		char lopHoc[5];
		int score;
		FACULTY y;
	public:
		void input();
		void output();
		STUDENT();
};
void STUDENT::input() {
	PERSON::input();
	cout << "Lop: "; fflush(stdin); gets(lopHoc);
	cout << "Diem so: "; cin >> score;
	y.input();
}
void STUDENT::output() {
	PERSON::output();
	cout << "Lop hoc: " << lopHoc << endl;
	cout << "Diem so: " << score << endl;
	y.output();
}
STUDENT::STUDENT() : PERSON() {
	strcpy(lopHoc, " ");
	this->score = 0;
}

int main() {
	STUDENT A;
	cout << "Nhap thong tin sinh vien:" << endl;
	A.input();
	cout << "=======================" << endl;
	A.output();
	
	return 0;
}


