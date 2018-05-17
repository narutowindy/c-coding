#include <stdio.h>

int main(void){

	int num,i,x;

	scanf("%d",&num);

	for ( i = 2 ; i < num ; i++ ){
	
		x = num % i ;

		if (x == 0 ){
			printf("Number is not prime divisible by %d \n",i);
			return 0;
		}
	}

	if ( i == num )
		printf("Number is a prime number \n");

	return 0;
}
