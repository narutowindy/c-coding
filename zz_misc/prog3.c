//Perfect square
//  num ,  / i*i

#include <stdio.h>

int main(void){

	int num, i , x ;
	
	scanf("%d",&num);
	for (  i = 2 ; i < num ; i++  ){
	
		x = num % (i*i);

		if(x == 0 )
			printf("This is a perfect square \n");
			return 0;
	}
	
	if ( num == i ){
		printf("This is not a perfect squarable \n");
		return 0;
	}
}
