#include <stdio.h>
int main() {
	
	int soTuoi;
	printf("Ban bao nhieu tuoi the ?\nKhai that di ");
	scanf ("%d",&soTuoi);
	if( soTuoi <= 0 ){
		printf("gion hoai :( ");
	} else{
		(soTuoi < 18 ) ? printf("Chua du tuoi di tu dau") : printf("Du tuoi di tu roi nha");
	}
	return 0;
}
/* if (dieu kien) {
		du tuoi di tu;
	} else {
		chua du tuoi di tu;
	}
	
	
	
	*/
