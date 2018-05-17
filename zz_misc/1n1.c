/*
 * 123454321
 *
 *
 * */

#include <stdio.h>

int main(void){

	int n;
	scanf("%d",&n);

	for(int i =1; i <= n ; i++ )
		printf("%d",i);
	for(int i = n-1 ; i >= 1 ; i-- )
		printf("%d",i);

	return 0;
}
