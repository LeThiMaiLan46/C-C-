#include <iostream>
#include <stdlib.h>

using namespace std;

void nhapMang (int *a, int &n) {
	while (2 > n || n > 30) {
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
	}
}

void xuatMang (int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a+i) << " ";
	}
}

int soCacSoChan (int *a, int n) {
	int soCacSoChan = 0;
	for (int i = 0; i < n; i++) {
		if (*(a+i) % 2 == 0) {
			soCacSoChan++;
		}
	}
	return soCacSoChan;
}

int soChanDauCuoi (int *a, int n) {
	int m;
	for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--) {
			if (*(a+i) % 2 == 0 && *(a+j) % 2 == 0) {
				m = j - i;
				int temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
				return m;
				break;
			}
		}
	}
	return -1;
}

void xoaPhanTu (int *a, int &n, int index) {
	for (int i = index; i < n; i++) {
		*(a + i) = *(a + i + 1);
	}
	a = (int*) realloc(a, (n-1) * sizeof(int));
	n--;
}

void xoaPhanTuViTrik (int *a, int n, int &k) {
	if (1 <= k && k <= n) {
		xoaPhanTu(a, n, k-1);
		xuatMang(a, n);
	} else {
		cout << "No";
	}
}

int timMin2 (int *a, int n) {
	int min1, min2;
	if (*(a+0) < *(a+1)) {
		min1 = *(a+0);
		min2 = *(a+1);
	} else {
		min1 = *(a+1);
		min2 = *(a+0);
	}
	for (int i = 2; i < n; i++) {
		if (*(a+i) <= min1) {
			min2 = min1;
			min1 = *(a+i);
		} else if (*(a+i) < min2) {
			min2 = *(a+i);
		}
	}
	return min2;
}
	
	void chenPhanTu (int *a, int &n) {
	a = (int*) realloc (a, (n+1) * sizeof(int));
	for (int i = n ; i > 1; i--) {
		a[i] = a[i - 1];
	}
	a[1] = timMin2(a, n);
	n++;
}
int main () {
	int *a, n;
	a = new int[n];
	nhapMang(a, n);
	xuatMang(a, n);
	cout << endl;
	
	if (soCacSoChan(a, n) == 0) {
		cout << "False";
	} else if (soCacSoChan(a, n) == 1) {
		for (int i = 0; i < n; i++) {
			if (*(a+i) % 2 == 0) {
				cout << *(a+i);
			}
		}
	} else {
		cout << soChanDauCuoi(a, n) << endl;
		xuatMang(a, n);
	}
	cout << endl;
	
	int k;
	cin >> k;
	xoaPhanTuViTrik(a, n, k);
	cout << endl;
	
	chenPhanTu(a, n);
	xuatMang(a, n);
	delete [] a;
	return 0;
}

