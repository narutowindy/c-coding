#include<stdio.h>


int main( void){

	int i ;
	char s[50];
	scanf("%*i %[^\n]s",s);
	for ( i = 0; s[i] != '\0' ; i++ );
	printf("%s  , number of chars %d ",s,i);
	return 0;
}
