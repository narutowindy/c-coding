/*	itoa()
 *	reverse()
 *
 *
 *
 *
 * */


#include <stdio.h>


void itoa_x(int n , char s[]);
void reverse(char s[]);
int str_len(char s[]);

int main(){
	
	int n;char s[20];
	puts("Enter a number: \n ");
	scanf("%d",&n);
	itoa_x(n,s);

	//Printing as a string 
	for (int i = 0 ; i < str_len(s) ; i++ )
		printf("%c\t", s[i]);


	return 0;
}


void itoa_x(int n , char s[]){
	int i = 0 ;
	do {
		s[i++] = n % 10 + '0' ; 
		// '0' = ascii number s[i++] is a ascii number 
		// n % b /*(base 16)*/  < 10 ? c + '0' : c - '10' + 'A' //give Hexa alpha
	}while (  (n/=10) > 0 );

	s[i] = '\0';
	reverse(s);
}

void reverse (char s[]){
	int i , j ;
	char c;
	for	( i = 0 , j = str_len(s) - 1 ; i < j ; i++ , j-- )
		c = s[i], s[i] = s[j], s[j] = c ;

}


int str_len (char s[]){

	int i ;
	for (i = 0 ; s[i] != '\0'; i++);
	return i;
}

