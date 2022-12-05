#include <stdio.h>

int main() {
	
	int a[99];
	int i, n;
	printf("So phan tu trong mang: ");
	do {
		scanf("%d", &n);
		if (n <= 0 || n >= 100) {
			printf("Khong thoa man. Nhap lai: ");
		}
	} while (n <= 0 || n >= 100);
	
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		do {
			scanf("%d", &a[i]);
			if (a[i] < 0) {
				printf("Nhap lai a[%d] = ", i);
			}
		} while (a[i] < 0);
	}
	
	int soUoc = 0;
	int sum = 0;
	for (i = 0; i < n; i++) {
		for (int uoc = 1; uoc <= a[i]; uoc++) {
			if (a[i] % uoc == 0) {
				soUoc++;
			}
		}
		if (soUoc == 2) {
			sum += a[i];
			printf("%d ", a[i]);
		}
		soUoc = 0;
	}
	
	printf("\nTong = %d", sum);
	
	return 0;
}
