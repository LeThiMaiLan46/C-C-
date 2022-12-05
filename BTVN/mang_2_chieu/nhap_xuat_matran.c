#include <stdio.h>
#include <conio.h>

void nhapMaTran(int a[][10], int m, int n) {
	int i, j;
	for(i=1; i<=m; i++) {
		for(j=1; j<=n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatMaTran(int a[][10], int m, int n) {
	int i, j;
	printf("Ta duoc ma tran: \n");
	for(i=1; i<=m; i++) {
		for(j=1; j<=n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int a[10][10];
	int m, n;
	printf("Nhap vao so dong cua ma tran: "); scanf("%d", &m);
	printf("Nhap vao so cot cua ma tran: "); scanf("%d", &n);
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	return 0;
}
