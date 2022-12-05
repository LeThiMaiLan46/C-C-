#include <bits/stdc++.h>
using namespace std;

/* 1
void printNumber(int a) {
	cout << "Prints an integer: " << a << endl;
}

void printNumber(float a) {
	cout << "Prints a float: " << a;
}
*/

/* 2
class myClass {
	public:
		int var;
		myClass() {}
		myClass(int a)
		{
			var = a;
		}
		
		myClass operator+(myClass &obj) {
			myClass res;
			res.var = this->var + obj.var;
			return res;
		}
};
*/

class PhanSo {
	private:
		int tuSo, mauSo;
		friend istream &operator>> (istream &in, PhanSo &a);
		friend ostream &operator<< (ostream &out, PhanSo a);
	public:
		PhanSo() {}
		PhanSo(int a, int b) {
			tuSo = a;
			mauSo = b;
		}
		PhanSo operator+ (PhanSo &d) {
			PhanSo c;
			c.tuSo = this->tuSo*d.mauSo + d.tuSo*mauSo;
			c.mauSo = this->mauSo * d.mauSo;
			return c;
		}
		PhanSo operator/ (PhanSo &e) {
			PhanSo m;
			m.tuSo = this->tuSo*e.mauSo;
			m.mauSo = this->mauSo*e.tuSo;
			return m;
		}
		PhanSo operator- (PhanSo &g) {
			PhanSo k;
			k.tuSo= this->tuSo*g.mauSo - mauSo*g.tuSo;
			k.mauSo= this->mauSo*g.mauSo;
			return k;
		}
		//void Xuat();
};
/* 3
void PhanSo::Xuat() {
	cout << tuSo << "/" << mauSo << endl;
}
*/

istream &operator>> (istream &in, PhanSo &a) {
	cout << "nhap tu so: ";
	in >> a.tuSo;
	cout << "nhap mau so: ";
	in>> a.mauSo;
	return in; // bat buoc phai return
}

ostream &operator<< (ostream &out, PhanSo a) {
	out << a.tuSo << "/" << a.mauSo;
	return out; // bat buoc phai return
}
int main() {
	/* 1
	int a=5;
	float b=5.4;
	printNumber(a);
	printNumber(b);
	*/
	/* 2
	myClass obj1(12), obj2(55);
	myClass res = obj1 + obj2;
	cout << res.var;
	*/
	/* 3
	PhanSo a(1, 2), b(1, 3), c, m;
	c = a + b;
	m = a / b;
	c.Xuat();
	m.Xuat();
	*/
	PhanSo a, b, c;
	cin >> a;
	cout << a << endl;
	cin >> b;
	cout << b << endl;
	c = a + b;
	cout << "ket qua la: ";
	cout << c;
	return 0;
}