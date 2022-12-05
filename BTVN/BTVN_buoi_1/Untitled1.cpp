#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << "a[" << i << "]";
		cin >> a[i];
	}
}

void xuat(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	nhap(a, n);
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] % 2 != 0 && a[j] != 0 && a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	xuat(a, n);
	return 0;
}