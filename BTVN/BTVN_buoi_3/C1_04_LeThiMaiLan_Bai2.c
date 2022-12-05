#include <stdio.h>

int main() {
   int a;
   for(a = 0; a <= 99 ; a++){
   	if(a % 10 == 0){
   		printf("\n\n");
	   }
   	printf("%d	", a);
   }
   return 0;
}
