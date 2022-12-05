#include <stdio.h>

int main() {
	
	int a[99];
	int i, n, j;
	printf("So phan tu trong mang: ");
	do {
		scanf("%d",&n);
		if (n <= 0 || n >= 100){
			printf("Khong thoa man. Hay nhap lai: ");
		}
	} while (n <= 0 || n >= 100);
	
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	// a) Dem va in ra cac so chinh phuong trong mang ?
	
	int k, soChinhPhuong = 0;
	// k la can bac 2 cua so chinh phuong
	
	for (i = 0; i < n; i++) {
		for (k = 0; k <= a[i] ; k++) {
		
			if ( k * k == a[i]) {
				soChinhPhuong++;
			}
		}
	}
	
	printf("\nCo %d so chinh phuong trong mang: ", soChinhPhuong);	
		for (i = 0; i < n; i++) {
		for (k = 0; k <= a[i]; k++) {
		
			if ( k * k == a[i]) {
				printf("%d ", a[i]);
			}
		}
	}
	
	// b) Dem va in ra so hoan hao trong mang
	
	int soHoanHao = 0;
	int sumUoc = 0;
	
	for (i = 0; i < n; i++) {
		for (j = 1; j <= a[i]; j++) {
			
			if (a[i] % j == 0) {
					sumUoc += j;
			}
		}
			if (sumUoc == a[i] * 2 && a[i] != 0) {
					soHoanHao++;
			}
		sumUoc = 0;
	}
	printf("\nCo %d so hoan hao trong mang: ", soHoanHao);
	
	for (i = 0; i < n; i++) {
		for (j = 1; j <= a[i]; j++) {
			
			if (a[i] % j == 0) {
					sumUoc += j;
			}
		}
			if (sumUoc == a[i] * 2 && a[i] != 0) {
				printf("%d ", a[i]);
		}
		sumUoc = 0;
	}
	
	return 0;
}
