#include <stdio.h>

int main() {
	double a[99];
	int i, n;
	printf("So phan tu trong mang: ");
	do {
		scanf("%d",&n);
		if (n <= 0 || n >= 100){
			printf("Khong thoa man. Hay nhap lai: ");
		}
	} while (n <= 0 || n >= 100);
	
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%lf", &a[i]);
	}
	
	double max = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] > max ){
			max = a[i];	
		}
	}	
	for (i = 0; i < n; i++) {
		if (a[i] == max) {
			printf("%d ", i + 1;
		}
	}
	return 0;
}
