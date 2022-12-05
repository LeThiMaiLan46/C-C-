#include <stdio.h>

int main() {
	double a[99];
	int i, j, n;
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
	
	for (i = 0; i < n; i++) {
		
			for ( j = i; j < n-1; j++) {
				if (a[i] < 0 && a[j] < 0) {
					if (a[i] < a[j]) {
						double temp = a[i];
						a[i] = a[j];
						a[j] = temp;
						break;
					}
				}
			}	
		}
		
	printf("Mang sau khi thay doi la ");
	for (i = 0; i < n; i++) {
		printf("%.1lf ", a[i]);
	}
	return 0;
}
