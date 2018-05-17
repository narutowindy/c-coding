/*
 *	output read
 *
 *	437
 *
 *
 *	four hunderd thirty seven
 *
 *	%s  hunderd  %s   $s
 *
 *
 *   
 * */


#include <stdio.h>

char* read_hd(int );
char* read_t(int );
//char* as return string from a function....

int main(void){


	int num;
	int hh,tt,dd;
	scanf("%d",&num);
	
	hh = num / 100 ;
	tt = ( num - hh*100 ) / 10;
	dd = ( num - hh *100 - tt * 10 /1 );

	printf( "%s hundred %s %s" ,read_hd(hh),read_t(tt) ,read_hd(dd));

	return 0;

 }

char* read_hd(int d){

	switch (d) {
	
		case 1 : 
			return "One";
		case 2 : 
			return "Two";
		case 3 : 
			return "Three";
		case 4 : 
			return "Four";
		case 5 : 
			return "Five";
		case 6 : 
			return "Six";
		case 7 : 
			return "Seven";
		case 8 : 
			return "eight";
		case 9 : 
			return "Nine";
	
	}
}

char* read_t(int t){

	switch (t) {
	
		case 1 : 
			return "tens???";
		case 2 : 
			return "Twenty";
		case 3 : 
			return "Thrirty";
		case 4 : 
			return "Fourty";
		case 5 : 
			return "Fifty";
		case 6 : 
			return "Sixty";
		case 7 : 
			return "Seventy";
		case 8 : 
			return "eighty";
		case 9 : 
			return "Ninety";
	
	}
}
