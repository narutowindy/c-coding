#include <stdio.h>

int main(){
	
	char c ;
	while( (c=getc(stdin)) != EOF )
		putc(c,stdin);

	return 0;


}
