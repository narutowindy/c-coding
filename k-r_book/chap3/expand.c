/*
 *	expand ( s1 , s2 )
 *
 *	s1  =	a-z			s2 =  abcd.....z
 *			a-b-c			  abc
 *			a-z0-9			  abcd--z0123--9
 *			-a-z			  -abcd----z
 * */


#include <stdio.h>

void expand( char s1[] , char s2[] );

int main(){

	char s1[10],s2[27];

	scanf("%[^\n]s",s1);

	if (	s1 == "a-z"	)
		expand(s1);

}
