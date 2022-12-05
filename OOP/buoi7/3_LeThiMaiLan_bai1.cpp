#include <bits/stdc++.h>
using namespace std;

class HANG {
	private:
		float trongLuong, giaTien, theTich;
		friend istream &operator>>(istream &is, HANG &x);
		friend ostream &operator<<(ostream &os, HANG x);
	public:
		HANG();
		HANG(float a, float b, float c);
		HANG operator+(HANG &d);
		bool operator==(HANG &d);
};

HANG::HANG() {
	trongLuong = 0;
	giaTien = 0;
	theTich = 0;
}

HANG::HANG(float a, float b, float c) {
	trongLuong = a;
	giaTien = b;
	theTich = c;
}

HANG HANG::operator+(HANG &d) {
	HANG e;
	e.trongLuong = this->trongLuong + d.trongLuong;
	e.giaTien = this->giaTien + d.giaTien;
	e.theTich = this->theTich + d.theTich;
	return e;
}

bool HANG::operator==(HANG &d) {
	if(this->trongLuong == d.trongLuong && this->giaTien == d.giaTien && this->theTich == d.theTich) {
		return true;
	} else {
		return false;
	}
}

istream &operator>>(istream &is, HANG &x) {
	cout << "Nhap trong luong: ";		is >> x.trongLuong;
	cout << "Nhap gia tien: ";			is >> x.giaTien;
	cout << "Nhap the tich: ";			is >> x.theTich;
	return is;
}

ostream &operator<<(ostream &os, HANG x) {
	os << "Trong luong: " << x.trongLuong << endl;
	os << "Gia tien: " << x.giaTien << endl;
	os << "The tich: " << x.theTich << endl;
	return os;
}

int main() {
	HANG a, b, c;
	cout << "Nhap mat hang a:" << endl;
	cin >> a;
	cout << "Nhap mat hang b: " << endl;
	cin >> b;
	c = a + b;
	cout << "Mat hang c:" << endl << c;
	if (a == b) {
		cout << "Mat hang a bang mat hang b";
	} else {
		cout << "Mat hang a khong bang mat hang b";
	}
}
