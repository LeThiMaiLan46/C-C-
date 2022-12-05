#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	float x;
	int n;
	int i;
	cout << "x = ";
	cin >> x;
	cout << "n = ";
	cin >> n;
	while ( n < 0) {
		cout << "nhap lai n = ";
		cin >> n ;
	}
	if (n % 2 != 0) {
		float L = 2022;
		int mauSo = 0;
		for (i = 1; i <= n; i++) {
			mauSo += i;
			L += (pow(x, i) + 2*i)/mauSo;
		}
		cout << fixed << setprecision(4) << L;
	} else {
		float L = 2021;
		int giaiThua = 1;
		for (i = 1; i <= n; i++) {
			giaiThua *= i;
			L += (pow(x, i) + 2*i)/giaiThua;
		}
		cout << fixed << setprecision(4) << L;
	}
}
