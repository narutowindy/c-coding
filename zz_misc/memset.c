#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
	
	char a[]="Hello world lets dive in to c promgraming";
	puts(a);
	memset(a, 48 , 12*sizeof(a[0]));   // Decimal 48 is ascii value of Zero
	puts(a);


	return 0;

}

