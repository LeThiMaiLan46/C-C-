#include <stdio.h>

int main() {
	
	int a[99];
	int i, n;
	printf("So phan tu trong mang: ");
	do {
		scanf("%d",&n);
		if (n <= 0 || n >= 100){
			printf("Khong thoa man. Hay nhap lai: ");
		}
	} while (n <= 0 || n >= 100);
	
	for (i=0; i < n; i++){
		printf("Nhap a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	
	int tg = 0;
	int gi = 0;
	for (i = 0; i < n-1; i++){
		if (a[i] >= a[i+1]){
			tg = 1;
		}
		if (a[i] <= a[i+1]) {
			gi = 1;
		}
	}
	
	if (tg == 0) {
		printf("\nYes");
	} else if (gi == 0) {
		printf("\nNo");
	} else {
		printf("\n-1");
	}
		return 0;
}
	

