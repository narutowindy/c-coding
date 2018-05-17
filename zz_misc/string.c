
/*
 *  #include <string.h>
 * p = strcmp (str1,str2)
 *
 * p < 0  str1 char[i] < str2 char[i]   // char values
 *
 * p > 0  str1 > str 2
 *
 * p = 0  if str1 == str2
 *
 *
 *
 * 	strcpy (dst , src)
 *			// just like dst = src ;
 * */


#include <stdio.h>
#include <string.h>

int main(void) {


	
	char str1[] = "hear";
	char str2[] = "heading";
	char str3[] = "";

	int p = strcmp(str1,str2);
	
	strcpy(str3 ,str2);

	printf("%d, %s\n",p,st);

	return 0;


}
