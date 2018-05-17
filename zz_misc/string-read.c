#include <stdio.h>


int main(void){

	char a[20];
	int s = printf("Hello\n");

	int p = scanf("%[^\n]s",a); //Until the next white-space it scans it 
	//   [a-zA-Z0-9] is used as charecter clases !!

	printf("Hello %s, %d , %d", a, p, s);
	return 0;
}
