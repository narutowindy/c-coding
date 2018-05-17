/*
 * ret = 	strcmp(s1, s2) 
 *
 *	ret = (  char (s1[i] ) - char (s2[i]) )
 *
 *
 *
 *
 * */

#include <stdio.h>
int strcmp_dup(const char *s1, const char *s2 );

int main(int arc , char **argv){

	int ret ;
	ret = strcmp_dup(argv[1] , argv[2]) ;
	
	if(ret < 0 )
		printf("%s is comes Before %s \n", argv[1],argv[2]);
	else if (ret > 0)
		printf("%s is comes After  %s \n", argv[1],argv[2]);
	else
		printf("Both strings are identical \n");

	return 0;
}



int strcmp_dup (const char *s1,const char *s2){

	for( ; *s1 == *s2 ; *s1++,*s2++)
		if(*s1 == 0)
			return 0;
	return *(const char *)s1 - *(const char *)s2 ;
}
