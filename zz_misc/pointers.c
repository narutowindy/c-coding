#include <stdio.h>


int main(){
	
	int i = 10;
	float f = 10.01;
	char ch = 'A';

	int *pi  ;  // pointer(*) pi points to  integer.
	float *pf ;
	char *pch ;

	pi = &i ,pf = &f , pch = &ch;

	printf (" %d  %f  %c  \n" , i ,f , ch);
	printf (" %d  %f  %c  \n" , *pi ,*pf , *pch);
	printf (" %p  %p  %p  \n" , &pi ,&pf , *pch);
	printf (" %p  %p  %p  \n" , *pi ,&pf , *pch);

	return 0;


}
