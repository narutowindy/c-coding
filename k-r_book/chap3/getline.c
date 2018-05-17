/*
 * read line and print longest line..
 *
 *	get a line and print it \n \n 
 *
 *	print one more line untill reach the EOF.
 *
 * */

#include <stdio.h>
#define MAXLINE 1000


int Getline( char line[] ,int  );  // getline() was std library function conflicting...
void copy( char longest[] , char line[] );

int main(){

	int max = 0,len ;
	char longest[MAXLINE], line[MAXLINE];

	while ( ( len = Getline(line , MAXLINE))  > 0 ){ // len is the length of the current line
		if ( len > max ){
			max = len;
			copy( longest ,line );  // bug was interchanged the arguments LOL:)
		}
	}
	
	if ( max > 0 )
		printf("%s",longest);
	return 0;
	
}

int Getline( char line[ ] , int l_index ){
	int i ,c;
	for ( i =0 ;  ( c = getchar()) != EOF && i < l_index -1  && c != '\n' ;++i)
		line[i] = c ;
	if ( c == '\n')
	{
		line[i] = c;
		++i;	
	}
	
	line[i] = '\0';
	return i ;

}

void copy (char longest[] , char line[] ){
	
	int i = 0 ;
	while ( (	longest[i] = line[i]	) != '\0') ++i;	

}
