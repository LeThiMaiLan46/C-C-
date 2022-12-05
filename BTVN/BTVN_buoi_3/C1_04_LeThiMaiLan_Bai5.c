#include <stdio.h>

int main(){
	short int n, k, A=0, B=0, C=0;
	printf("Nhap vao 1 so lon hon 0 va nho hon 100: ");
	scanf("%d", &n);
	if( n >= 0 && n <= 100){
		for( k = 1; k <= n; k++){
			A += k;
			B = B + 2*k;
			C = C + (2*k + 1);
		}
		printf("A = 1 + 2 + 3 +...+ %d = %d\n", n,A);
		printf("B = 1 + 2 + 4 +...+ %d = %d\n", 2*n,B+1);
		printf("C = 1 + 2 + 3 +...+ %d = %d", 2*n+1,C+1);
	} else{
		printf("Khong thoa man dieu kien");
	}
	return 0;
}
