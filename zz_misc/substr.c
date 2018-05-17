/*	ret = substr ( pattern , source ) 
 *
 * ret --> position at which the ofirst occurance of pattern on source
 *  
 *
 * 		Src =  "asdsadadzxcada"
 * 		pattern = "zxc"
 *
 * */
#include<stdio.h>
#include<errno.h>
int substr(char *s1 , char *s2);

int main (int argc , char **argv){

	if (argc !=  3){
		perror("Error: ");
		return(-1); 
	}
	int ret ;
	// pattern is argv[1]
	// src is argv[2]
	
	ret = substr(argv[1] , argv[2]);
	if(ret == -1)
		puts("Pattern not found");
	else
	printf("Pattern is found at the location %d \n ",ret);

	return 0;
}


int substr(char s1[] , char s2[]){

	int i, j, first;

	for( i = j = 0 ; s2[j] != s1[i] ; j++ );
		first = j ; //finding the position of first char ,
		printf("%d\n",first);
	for ( ; s1[i] == s2[j]; i++,j++ ){		// check the next charecters 
			if(s1[i+1] == '\0')					// if we run out of the pattern 
				return first;
	}
	
	return -1;
}
