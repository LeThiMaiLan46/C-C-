#include <iostream>
#include <math.h>

using namespace std;

void Nhap(int &n, int &m) {
	do {
		cin >> n;
		cin >> m;
	} while (n < 4 || n > m);
}

int Ham1(int a, int b) {
	int tong=0;
	for (int i=a; i<=b; i++) {
		if (i % 3 == 0) {
			tong += i;
		}
	}
	cout << tong << endl;
}

float Ham2(int n) {
	float P=0;
	for (int i=1; i<=n; i++) {
		P = sqrt(i + P);
	}
	cout << P << endl;
}

int main() {
	int n,m;
	Nhap(n,m);
	Ham1(1,n);
	Ham1(n,m);
	Ham2(n);
}
