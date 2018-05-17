// Pointer decay , *p ,p , &p  defferences 
#include<stdio.h>


int main(){

	char msg[] = "Hello world dkdkljf al ";
	char *p = msg ;
	puts(msg);
	printf( "size of msg %d %p \n" ,(int) sizeof(msg),msg);
	printf( "size of p %d %p %p \n" ,(int) sizeof(p),&p,p);
	return 0;
}

