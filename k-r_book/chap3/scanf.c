#include<stdio.h>


int main(){

	char s1[20],s2[20];

	scanf("%19[^0-9]%19[0-9]",s1,s2);
	// %[] operator and %[]s are different 
	// %[] works on all char,  
	puts(s1);
	puts(s2);
	return 0;

}
