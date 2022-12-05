#include <stdio.h>

int main() {
	
	int a = 1;
	while(a >= 0){
		printf("Nhap vao so duong ma ban thich: ");
		scanf("%d", &a);
		if(a == 0){
			printf("Khong thoa man dieu kien.\n");
			continue;
		}
	}
	printf("Day khong phai so duong roi. Tam biet nhe!");
}
