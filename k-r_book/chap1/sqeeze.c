/*
 *   delete a char c from array of strings array s;
 *
 *    compare char with every char in the string,
 *
 *  case 1; 
 *
 s[]  _ _ _ _ _ _ _ _ _ '\0' ;
 *
 i    0 1 2 3 4 5 6 7 8  9
 *
  c   - - c - - c - - - - ;
 *
 *    c found at s[2] , so copy s[3] -> s[2]; shrinks len of array.
 *
 * */


#include<stdio.h>
void sqeeze(char x , char a[]);

int main() {
	char c , s[25] ;
	
	puts("enter some string \n" );
	gets(s);

	puts("Enter a char \n");
	scanf("%c",&c);
	sqeeze(c,s);
	
	puts(s);
	return 0;
}


void sqeeze (char x , char a[] ){
	int i , j ;
	for (	i = j =  0; a[i] != '\0' ; i++ ){
		if ( a[i] != x  ){
			a[j++] = a[i];
		}
	}
	a[j] = '\0';
}
