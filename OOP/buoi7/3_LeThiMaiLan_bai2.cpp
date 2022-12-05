#include <bits/stdc++.h>
using namespace std;

class THUADAT {
	private:
		float chieuDai, chieuRong, giaTien;
		friend istream &operator>>(istream &is, THUADAT &a);
		friend ostream &operator<<(ostream &os, THUADAT a);
	public:
		THUADAT();
		THUADAT(float a, float b, float c);
		float dienTich();
		bool operator==(THUADAT &a);
};

THUADAT::THUADAT() {
	chieuDai = 0;
	chieuRong = 0;
	giaTien = 0;
}

THUADAT::THUADAT(float a, float b, float c) {
	chieuDai = a;
	chieuRong = b;
	giaTien = c;
}

float THUADAT::dienTich() {
	return chieuDai * chieuRong;
}

bool THUADAT::operator==(THUADAT &a) {
	if(this->chieuDai == a.chieuDai && this->chieuRong == a.chieuRong && this->giaTien == a.giaTien) {
		return true;
	} else {
		return false;
	}
}

istream &operator>>(istream &is, THUADAT &a) {
	cout << "Chieu dai: ";		is >> a.chieuDai;
	cout << "Chieu rong: ";		is >> a.chieuRong;
	cout << "Gia tien: ";		is >> a.giaTien;
	return is;
}

ostream &operator<<(ostream &os, THUADAT a) {
	os << "Chieu dai: " << a.chieuDai << endl;
	os << "Chieu rong: " << a.chieuRong << endl;
	os << "Gia tien: " << a.giaTien << endl;
	return os;
}

int main() {
	THUADAT a, b;
	cout << "Nhap thong tin thua dat a:" << endl;
	cin >> a;
	cout << "nhap thong tin thua dat b:" << endl;
	cin >> b;
	float dta, dtb;
	dta = a.dienTich();
	cout << "Dien tich thua dat a la: " << dta << endl;
	dtb = b.dienTich();
	cout << "Dien tich thua dat b la: " << dtb << endl;
	if(a == b) {
		cout << "Thua dat a bang thua dat b";
	} else {
		cout << "Thua dat a khong bang thua dat b";
	}
	return 0;
}