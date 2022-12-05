#include <bits/stdc++.h>
using namespace std;

class HinhBinhHanh {
	private:
		double a, b, h;
	public:
		HinhBinhHanh(double a, double b, double h);
		float chuVi();
		float dienTich();
};
HinhBinhHanh::HinhBinhHanh(double a, double b, double h) {
	this->a = a;
	this->b = b;
	this->h = h;
}
float HinhBinhHanh::chuVi() {
	return (a + b) * 2;
}

float HinhBinhHanh::dienTich() {
	if(a > b) {
		return a*h;
	} else {
		return b*h;
	}
}

int main() {
	HinhBinhHanh a (2, 3.2, 4.1);
	cout << "+) Hinh binh hanh so 1 co:" << endl;
	float cva = a.chuVi();
	float dta = a.dienTich();
	cout << "Chu vi = " << cva << endl << "Dien tich = " << dta << endl;
	
	HinhBinhHanh b (7.2, 5.3, 6);
	cout << "+) Hinh binh hanh so 2 co:" << endl;
	float cvb = b.chuVi();
	float dtb = b.dienTich();
	cout << "Chu vi = " << cvb << endl << "Dien tich = " << dtb << endl;
	
	cout << "+) Sau khi so sanh, hinh co dien tich lon hon la ";
	if(dta > dtb) {
		cout << "hinh binh hanh so 1.";
	} else {
		cout << "hinh binh hanh so 2.";
	}
}