#include <stdio.h>

int main(void){


	//formated 
	//Hooman readable format
	// 65 -> 'A' ; "65" ; 0x41 
	//
	//int printf( 	const char *restrict format , ...			  ) ; 
	//int scanf(  	const char *restrict format ,  ...			  ) ; 
	//int sprintf(	char *restrict buffer , const char * restrict format, ... ) ;

	// Number of format specifiers must match , num of args passed to these funcs
	//  Attack : format string attacks.

	//   %c 	- ASCII
	//   %s	 	- Null ter string
	//   %d , %i    - singed int ,decimal
	//   %u 	- unsined int
	//   %x,  %X    - Hex int
	//   %f		- floating point    ;   
	
// Echo application
 int i ;
 char c ;
 float f ;
 double d ;
 char	str[30];

 scanf ( "%i %c %f %lf %[^\n]s " , &i , &c, &f, &d , str ) ;

 printf ( "int %i\nchar %c\nfloat %f\ndouble %lf\nstring %s\n" , i , c, f, d, str );

 return 0;

}
