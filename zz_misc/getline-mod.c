
/*
 *	get line from stdin , store it in a s[] , then print it along with number...
 *	
 *	
 *
 *
 *
 *
 *
 * */


#include <stdio.h>

int main(){

	int c , i = 0 ,j = 0;

	char s[100];
	
		while(	( c = getchar()	) != EOF	){

			if(c != '\n' )
				s[i] = c,i++;
			else{
				s[i] = 0, i = 0 ;
				printf("\n%d  LINE %s\n",++j,s);
			}
		}
	
	return 0;
}
