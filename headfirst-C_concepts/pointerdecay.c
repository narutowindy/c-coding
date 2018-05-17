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


/*
Page 113 : HEADfirstC	*(p+1) = 'K'  // will segfault
	ref: https://stackoverflow.com/questions/1576489/where-are-constant-variables-stored-in-c
 
*/
