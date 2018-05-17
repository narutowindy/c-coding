/*
 *   input a string of  char,   array s[20];
 *
 *   take input and print that in a reverse order !
 *    s[] = "asdfghj"
 *
 *    print in reverse order as "jhgfdsa"
 *
 *    > str_len() function?   
 *	  > reverse()
 *
 * */

#include<stdio.h>


int str_len(char s[] );
void reverse(char s[]);

int main(){

	int ret;
	char s[20];

	ret = scanf("%[^\n]s",s);
	puts(s);
	printf("scanf read %d\n",ret);
	reverse(s);
	puts(s);

	return 0;

}

int str_len(char s[]){
	int i;	
	puts("i'm in str_len function\n");
	for (  i = 0 ; s[i] != '\0' ; i++ );
	printf("%d\n",i);
	return (i);   // this was the bug
}

void reverse( char s[] ){
	puts("i'm in reverse function\n");
	int i , j , c='c';
	for ( i = 0 ,j = str_len(s)-1 ; i < j ; i++ , j-- )   //strelen = int except last null char,  but last_index = strlen(s) -1 ;
		{	
			c = s[i] , s[i] = s[j]; s[j] = c;
			printf("%c %c %c\t",c,s[i],s[j]);
			printf("%d %d\n",i,j);
		}
	puts(s);
}



