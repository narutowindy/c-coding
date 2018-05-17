/*
 * 	redirection works 
 * 	./gets-1 < filename.txt
 *
 * 	prints  the contents upto 10 chars....
 *
 * */
#include<stdio.h>

int main(void){

	char buff[10];
	gets(buff);
	puts(buff);
	return 0;


}
