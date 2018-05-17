/*
 * removing extraspace  spaces and also including tabs .
 *
 * sdjasdh as a sa    jshdksah ksahd
 *
 * c =getchar() != EOF
 *
 * if c = ' ' 
 *   while(c = ' ')
 *     
 *     * 
 * *
 * */
#include<stdio.h>


int main () {

	int c;

	while ( ( c = getchar() ) != EOF) {
		putchar( c );
		if( c == ' ' || c == '\t' )
			while( (c =getchar() ) == ' ' ||  (c =getchar() ) == '\t' );
		
	}

return 0;
}

