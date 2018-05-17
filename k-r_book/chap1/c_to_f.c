/* c = 5/9 * (f-32)
 *
 *  f = c *9/5 +32
 *
 *
 *
 * */

#include<stdio.h>

#define LOW -50
#define HIGH 50
#define STEP 5

int main(){

	signed int c;
	printf( "Celcious\tForeinheight\n" );
	for( c = -50 ; c <= 50 ; c += 5 ){
		printf( "%8d\t%8.2f \n", c,  (  (c * 9.0 ) / 5 + 32 ) );
	}
	
	return 0;

}
