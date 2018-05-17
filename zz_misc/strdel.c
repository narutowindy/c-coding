/*
 *	strdel (n , amount , src )
 *
 *	delete amount of chars  from position n in given src
 *
 *
 * 	0 1 2 3 4 5 6
 * 	A B C D E F \0
 * 	  - C D
 * 	-------------
 *  A B E F \0
 * 	------------
 *
 * */

#include<stdio.h>
#include<stdlib.h>

void srcdel( int n, int a, char str[]);

int main(int argc , char *argv[]){
	
	if (argc != 4)
		puts("Usage: ./strdel n amount string");

	int n = atoi(argv[1]);
	int a = atoi(argv[2]);

	srcdel(n,a,argv[3]);

	puts(argv[3]);
	return 0;

}

void srcdel ( int n, int a, char str[]){

	
	for( ;  ;  n++){
		str[n] = str[  n + a];
		if (str[n] == '\0' ) 
			return;
	}
}
