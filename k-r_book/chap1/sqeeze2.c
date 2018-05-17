/*
 * sqeeze ( s1, s2)
 * delete each char in s1 which matches with  any char in s2;
 *
 *
 * s1 :  s1[0] s1[1] s1[2] s1[3]  
 *
 * s2 :  s2[0] s2[1] s2[3] s2[4]
 *
 *
 * */

#include<stdio.h>


int main() {

	char s[25] , t[25];
	
	puts("Enter s \n");
	gets(s);
	puts("Enter t \n");
	gets(t);

	sqeeze( s ,t );

	puts(s);
	puts(t);

	return 0;

}

void sqeeze (char s[] char t[] ){


	int i , j ;
	
	for( i = 0 ; s[i] != '\0' ; i++ ){
	
	 	for (j = 0;  )
			if ( s[i] != t[i]  )	
	
	
	}






}

