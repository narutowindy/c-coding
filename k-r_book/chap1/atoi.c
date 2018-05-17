/*
 *	convert char to  integer.
 *   array []   string 
 *	
 *		48  '0' - 0
 *		49  '1' - 1
 *		50  '2' - 2
 *
 *		57  '9' - 9
 *
 * */



#include<stdio.h>

int main() {
	int c , i = 0;
	char a[20];

	while (  ( c = getchar() ) !=  '\n'){
		
		a[i] = c;
		i++ ;
	}

	printf( "%s \n" , atoi(c) );
	return 0;
	
}

 int atoi (	char s[] ){
 	int n ;
	for (int i = 0 ;  s[i] >= '0' && s[i] <= '9' ; ++i ){
 	   n =  10 * n + s[i] - '0';	
	}
	return(n);
 }
