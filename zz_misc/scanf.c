#include <stdio.h>


int main(void){

	int a,b,c,d,e,f;

	printf("INT a\n HEX b\nOCTAL c \n");
	scanf("%d %i %i",&a,&b,&c);


	printf("%d %x %o \n",a,b,c);
	
	printf("geeks%n Hellpw\n",&e); 
	//allocating value to var e from reading bytes
	
	printf("%d\n",e);

	return 0;
}
