/*
 *
 * asdak asjdas kdasd akda gdjagj asgdjagd
 *
 * wc =0;
 * first outside;
 * 
 * when encouter ' ' or '\t' or '\n'
 * 			outside word.
 * 				
 * 	  then word count increments
 *
 *
 *
 *
 *
 * */



#include<stdio.h>

#define IN 1
#define OUT 0


int main () {

	int c, wc = 0 ,in_out = OUT;
	

	while ( ( c = getchar() ) != EOF ) {
	
		if ( c == ' ' || c == '\t' || c == '\n' ){
			 in_out=OUT;
		 }
	
		else if ( in_out == OUT) {
			in_out = IN ;
			wc++;
		}
	}

printf("no. of words %d", wc);
return 0;
}
