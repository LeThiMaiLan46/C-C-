#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void nhapDay(int *a, int &n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
	}
}

void xuatDay(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a+i) << " ";
	}
}

int soAm(int *a, int n) {
	int mauSo = 0, tuSo = 0;
	for (int i = 0; i < n; i++) {
		if (*(a+i) < 0 && abs(*(a+i)) < 8) {
			cout << *(a+i);
			mauSo++;
			tuSo += *(a+i);
		}
	}
	if (mauSo == 0) {
		cout << 0;
	} else cout << tuSo/mauSo;
}

int timMax2(int *a, int n) {
	int max1, max2;
	if (*(a+0) > *(a+1)) {
		max1 = *(a+0);
		max2 = *(a+1);
	} else {
		max1 = *(a+1);
		max2 = *(a+0);
	}
	for (int i = 2; i < n; i++) {
		if (*(a+i) >= max1) {
			max2 = max1;
			max1 = *(a+i);
		} else if (*(a+i) > max2) {
			max2 = *(a+i);
		}
	}
	cout << max2;
}

void chenX(int *a, int &n, int pos, int x) {
	for (int i = n; i > pos; i--) {
		*(a+i) = *(a+i-1);
	}
	*(a+pos) = x;
	n++;
}

int main() {
	int *a, n;
	a = new int[n];
	nhapDay(a, n);
	xuatDay(a, n);
	cout << endl;
	soAm(a, n);
	cout << endl;
	timMax2(a, n);
	cout << endl;
	int x, m=0;
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (*(a+i) < x) {
			chenX(a, n, i+1, x);
			i++;
		}
	}
	xuatDay(a, n);
	delete [] a;
	return 0;
}
