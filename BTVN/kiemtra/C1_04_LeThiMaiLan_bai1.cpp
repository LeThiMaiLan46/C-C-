#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void NhapSo(double &x, int &n) {
	cin >> x;
	cin >> n;
	while (n <= 0) {
		cin >> n;
	}
}

double BieuThuc1(double x, int n) {
	double a = exp(x);
	double y = sqrt (a + n);
	cout << fixed << setprecision(2) << y;
}

double BieuThuc2(double x, int n) {
	double y = 2022;
	double b = 1;
	for (int i = 1; i < n+1; i++) {
		b *= x;
		y += (b-i) / (2*i - 1);
	}
	cout << fixed << setprecision(2) << y;
}

int main () {
	int n;
	double x;
	NhapSo(x, n);
	if (n % 2 == 0) {
		BieuThuc1(2*x, 3*n);
	} else if (n % 2 != 0) {
		BieuThuc2(2*x, 3*n);
	}
	return 0;
}
