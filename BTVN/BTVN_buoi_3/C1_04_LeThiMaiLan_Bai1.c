#include <stdio.h>
int main(){
	
	int soNguyen = 100;
	printf("- for loop:\n");
	for(soNguyen = 100; soNguyen > 0; soNguyen--){
		printf("%d ", soNguyen);
	}
	
	int a = 100; 
	printf("\n- while loop:\n");
	while( a >= 1){
		printf("%d ", a);
		a--;
	}
	
	int b=100;
	printf("\n- do while loop:\n");
	do{
		printf("%d ", b);
		b--;
	} while (b >= 1);
	
	return 0;
}
