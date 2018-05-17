/*
 * No of digit occured in a given strings
 * white space, other char
 *  array[10] ; 
 * */

#include<stdio.h>

int main () {

	int c , i, a [ 10 ], nd , nw , no ;
	nd = nw = no = 0 ;

	for ( i = 0 ; i < 10 ; i++ )
		a [ i ]  = 0 ;

	while ( ( c = getchar() ) != EOF ){
		
		if ( c >= '0' && c <= '9' )
			++a [ c - '0' ];
			
		else if ( c == ' ' || c == '\t' || c == '\n'  )
			nw++;
		else 
			no++;
	}


	printf (" Digit\tNo.count  \n ");

	for (i=0; i<10; i++)
		printf("%2d\t%d\n",i ,a[i]);

	printf("White spaces %d , Other char %d", nw, no);
	return 0;

}
