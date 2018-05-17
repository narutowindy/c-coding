/* count lines 
 *
 * until EOF
 *
 * if c = '\n', increment line count.
 *
 *
 *
 * */


#include<stdio.h>

int main() {
	
	int c,nl,nc,nb,nt;
	nl = nc = nb = nt = 0 ;

	while ( (c = getchar() ) != EOF ){
	
		nc++;
		if ( c == '\n' ){
		
			nl++;
		}
		if ( c == ' ' ){
		
			nb++;
		}
		if ( c == '\t' ){
		
			nt++;
		}
	}

	printf("Number of char %d\n", nc);
	printf("Number of line %d\n", nl);
	printf("Number of blanks %d\n", nb);
	printf("Number of tabs %d\n", nt);
return 0;

}
