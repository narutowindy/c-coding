#include <stdio.h>

int main(){

	FILE * fp = fopen("text.txt","a+");
	int count =0;
	char c;

	while ( (c = getc(fp)) != EOF )
	{	putc(stdout);
		count++;
	}

	fprintf(fp,"Number of chars read %d\n",count);
	return 0;

}
