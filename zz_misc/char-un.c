/*
 *  printing all -128 to 128  char values ... 
 *
 * */
#include<stdio.h>

int main(){
	
	char *format="%c";
	for (int i = -128 ; i<=128 ;i++ ){
		if (  i % 70 == 0)
			printf("\n");
		printf(format,i);
	}
	return 0;
}
