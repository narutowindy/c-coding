#include <stdio.h> 


int main(){


 // stream data types ,   FILES , charector streams
 // unformated   12  - > "1" "2" 
 //	
 //
//int getchar(void);      // == getc( stdin )
//int putchar ( int ch ); // == putc ( ch ,stdout ) 
//char * fgets( char * restrict str , int count , FILE * restrict stream ) ; // reads from steam --> str var 
// gets();   
// int puts( const char * str );

	char c ;
	char str[20] ;

// char echo
	c = getchar() ;
	putchar(c) ; 
// line echo   , \n 
	getchar() ; // removes next char if we enter key -> it removes this extra \n.
	putchar('\n');

	fgets(str , 20 , stdin );
	puts(str);

}
