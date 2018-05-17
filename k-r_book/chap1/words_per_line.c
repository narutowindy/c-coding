/*
 *asdha sdhaksd asjhdk asdhka shdk ashdkas dasdsad
 *
 * when in_out = OUT put \n ;
 *
 *
 * */


#include<stdio.h>

int main( ) {

	int c, in = 0 ;

		
	while ( ( c = getchar() )  != EOF ){
			
			if ( c == ' ' ||	c == '\t' ){
				putchar('\n');
				in = 0;
				while( (c = getchar() ) == ' ' || (c = getchar() ) == '\t' ); }
			else if ( in = 1 )
				putchar(c);		

	}
}
