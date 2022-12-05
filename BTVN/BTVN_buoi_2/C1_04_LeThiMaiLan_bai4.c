#include <stdio.h>
int main(){
	int n,m,k;
	printf("Lop anh co may hoc sinh a  ");
	scanf("%d",&n);
	printf("Anh mua may goi keo a ");
	scanf("%d",&m);
	printf("Moi goi co may cai a ");
	scanf("%d",&k);
	if( n >= 1 && n <= 20 && m >= 1 && m <= 5 && k >=10 && k <= 50){
		(k * m % n == 0) ? printf("No") : printf("Yes");
	 
	}
	else{
		printf("Khong chia cho chung no luon anh a");
	}
	
}
