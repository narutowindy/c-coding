/*
 *	
 *	getline   upto \n and store it in a line[]
 *
 *
 *
 *
 * */

#include <stdio.h>


int main(){

	char s[100];
	char c;

	int i = 0 ;
	while( (c = getchar() )!= EOF ){
	
		if( c != '\n')
			s[i] = c;
		else
			s[i] = '\0';
		i++ ;
	}
	puts(s);
	return 0;
}

