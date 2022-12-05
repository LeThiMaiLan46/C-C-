#include <stdio.h>
int main(){
	
	int a;
	printf("Nhap a thoa man dieu kien moi tinh cho nha ");
	scanf("%d",&a);
	double b = (double)a * a * a * a / 81;
	(2 <= a && a <= 50) ? printf ("Ket qua ra %.3f nha", b) : printf ("Gion hoai nha");
}
