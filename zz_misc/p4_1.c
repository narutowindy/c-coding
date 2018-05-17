/*
 *	read two names and print in alphabetical order.
 *
 * */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	int p = 0;
	char s1[10],s2[10];
	puts("Enter a two names\n");
	scanf("%s",s1);
	scanf("%s",s2);
	
	//converting strings to lower using "ctype.h" :> int tolower(int c)
	for(int i = 0 ; i < 10 ; i++  )
		s1[i] = tolower(s1[i]);
	for(int i = 0 ; i < 10 ; i++  )
		s2[i] = tolower(s2[i]);

	puts("\n\n\n");
	printf("len (s1 ) = %d ;\nlen (s2) = %d \n",strlen(s1),strlen(s2));

	p = strcmp(s1 , s2);

	if (  p > 0  ){
	
		printf("%s \n%s",s2,s1);
	}
	else if ( p < 0 ){
	
		printf("%s \n%s\n",s1,s2);
	}
	else
		printf("Both are same names!! lucky twins %s\n",s1);
	return 0;


}
