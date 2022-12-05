#include <iostream>
#include <math.h>

using namespace std;

void Nhap(int &n, int &m, float &x) {
	cin >> n >> m;
	if (n < m) {
		int temp = n;
		n = m;
		m = temp;
	}
	cin >> x;
}

float tinhF(float x, int e) {
	float F=2020 * (float)fabs(e*x);
	for (int i=0; i<=e; i++) {
		F += x / (2*e - i);
	}
	return F;
}

int main () {
	float x;
	int n,m;
	Nhap(n, m, x);
	cout << tinhF(x, n)-tinhF(x, m);;
	return 0;
}
