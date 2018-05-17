/* C= 5/9 * (f-32) 
 *
 * F from 0 to 300,
 *
 *
 * */


#include<stdio.h>
#define LOW 0
#define HIGH 300
#define STEP 20


int main(){
	
	int f = 0;
	printf("fareinheit\tcelcious\n");
	for( f = 0 ;f <= HIGH ; f += STEP ){
		printf( "%10d\t%6.2f\n", f, 5.0 / 9 * ( f - 32 ) );
	}

	return 0;
}

