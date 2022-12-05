#include <stdio.h>

int main(){
	
	int giaiThua = 1;
	int x, k;
	printf("Nhap so nguyen duong ban muon tinh giai thua: ");
	scanf("%d", &x);
	if(x >= 0){
		for(k = 1; k <= x; k++){
			giaiThua =giaiThua * k;
		}
	printf("Giai thua cua %d la %d", x,giaiThua);
	} else{
		printf("Khong thoa man dieu kien");
	}
	return 0;
}
