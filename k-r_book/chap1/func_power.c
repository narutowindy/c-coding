/**
 * power(x , n) 
 *
 *
 *
 */

#include<stdio.h>

int power(int , int );

int main () {

	int m , n;
	scanf("%d%d", &m, &n);
	printf( "%d ", power(m , n) );
	return 0;

}

int power(int x , int n ) {

	int i,p = 1;

	for ( i = 1 ; i <= n; ++i ){
		p = p * x ;
		printf("%d\t%d\n",i,p);
	}
	return (p);
}
