#include <stdio.h>
int main(){
	int N;
	printf("Ban muon tim nam nao ");
	scanf("%d",&N);
	int M;
	printf("Ban muon tim thang may ");
	scanf("%d",&M);
	if( N < 0 || M < 1 || M > 12 ){
		printf("Roi muon tui tim kieu gi day ?");
	} else if ( M % 2 == 0 && M != 2 ){
		printf("Thang %d nam %d co 30 ngay",M,N);
	} else if (N % 4 != 0 && M == 2 ){
		printf("Thang 2 nam %d co 28 ngay",N);
	} else if ( M % 2 != 0 && M != 2 ){
		printf("Thang %d nam %d co 31 ngay",M,N);
	}
	else{
		printf("Thang 2 nam %d co 29 ngay",N);
	}
	
	
}
