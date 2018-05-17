#include<stdio.h>

void cat(char a[] , char b[]);


int main(){

		char s[100] ,t[100] ;

		puts("write something in s array \n");

		gets(s);
		puts("write something in t array \n");

		gets(t);
		cat(s,t);

		puts(s);

		return 0;


}

void cat ( char a[] , char b[] ){

	int i,j;
	i = j = 0 ;

	while ( a[ i ] != '\0' )
		i++;

	while ( ( a[i++] = b[j++]  ) != '\0'  );

}
