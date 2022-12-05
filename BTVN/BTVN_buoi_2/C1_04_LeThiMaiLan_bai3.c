#include <stdio.h>
int main(){
	
	int n,m;
	printf("Anh Hung muon mua bao nhieu bong a ? ");
	scanf("%d",&n);
	printf("Anh Hung muon mua loai bao nhieu tien 1 bong a ? ");
	scanf("%d",&m);
	int S1 = n * m - n * m * 0.2;
	int S2 = n * m - n * m * 0.15;
	int S3 = n * m;
	if( n < 1 || n > 999 || m < 7000 || m > 200000 || m % 100 != 0){
		printf ("Anh Hung queo lua tiem khac dum em a ");
	} 	else if( n % 2 != 0 && n > 5){
		printf("Tong thiet hai cua anh la %d ",S1);
	}
		else if( n % 2 ==0 && n > 4){
			printf("Tong thiet hai cua anh la %d ",S2);
		}
		else{
			printf("Tong thiet hai cua anh la %d",S3);
		}
	}
