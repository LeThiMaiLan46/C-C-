#include <bits/stdc++.h>
using namespace std;

class ARRAY {
	private:
		int *VALUE;
		int n;
	public:
		ARRAY();
		ARRAY(int *b, int m);
		~ARRAY();
		void NHAP();
		void XUAT();
};

ARRAY::ARRAY() {
	n = 0;
}

ARRAY::ARRAY(int *b, int m) {
	n = m;
	VALUE = b;
	b = new int[m];
	for(int i=0; i<m; i++) {
		b[i] = 0;
	}
}

ARRAY::~ARRAY() {
	n = 0;
	delete[] VALUE;
	cout << "\nDa huy ";
}

void ARRAY::NHAP() {
	cout << "\nNhap n = ";
	cin >> n;
	VALUE = new int[n];
	for(int i=0; i<n; i++) {
		cout << "a[" << i << "] = ";
		cin >> VALUE[i];
	}
}

void ARRAY::XUAT() {
	for(int i=0; i<n; i++) {
		cout << VALUE[i] << " ";
	}
}

int main() {
	ARRAY b;
	b.XUAT();
	int a[4] = {0, 1, 2, 3};
	ARRAY c (a, 4);
	c.XUAT();
	ARRAY A;
	A.NHAP();
	A.XUAT();
	return 0;
}
