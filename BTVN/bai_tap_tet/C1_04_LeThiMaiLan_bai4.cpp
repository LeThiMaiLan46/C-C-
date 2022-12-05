#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int &n, float &x) {
	do {
		cin >> n;
	} while (n <= 0);
	cin >> x;
}

float TinhS(int n, float x) {
	float S = 0;
	int i, giaiThua = 1;
	for (i=1; i<=n; i++) {
		giaiThua *= i;
		S += pow(-1, i) * pow(x, i) / giaiThua;
	}
	cout << S;
}

int main() {
	int n;
	float x;
	Nhap(n,x);
	TinhS(n, x);
}
