/* Getchar and putchar to copy input char to screen 
 *
 * EOF == End Of File value -1 
 *
 * char ==> always +ve,
 * so we use int to compare char with EOF which is -1;
 *
 * */


#include<stdio.h>


int main () {

	int c;
	printf("%d \n ",EOF);
	while( ( c = getchar() ) != EOF) {   // != precedence is higher than =
		putchar(c);
	}
return 0;
}
