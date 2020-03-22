#include <stdlib.h>
#include <stdio.h>


int main( int argc , char * argv[] ){

	if ( argc < 3 )
	{	printf("Usage: %s %s %s",argv[0],"arg1" , "arg2");
		exit(-1);
	}
	char c ;
	FILE *fp1 = fopen(argv[1],"r") ;
	if ( fp1 == NULL ) puts("Error opening FIle");

	FILE *fp2 = fopen(argv[2],"w+") ;
	while ( (c=fgetc(fp1)) != EOF )
		fputc(c , fp2);
	return 0;



}
