#include <stdio.h>

int main(){
	
	short int n,k;
	printf("Ban muon tinh bang cuu chuong nao? ");
	scanf("%d", &n);
	if(n >=2 && n <= 9){
		for(k = 1; k <= 10; k++){
			printf("%d x %d = %d\n", n,k,n*k);
		}
		printf("\nChuc ban hoc tot!");
	} else{
		printf("Khong co bang cuu chuong %d", n);
	}
	return 0;
}
