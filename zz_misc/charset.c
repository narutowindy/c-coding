/*
 *	charset constant  
 *			\ddd  =\025       //ocatal
 *			\0xhh  = \0x12     // Hexadecimal
 */

#include <stdio.h>

int main(void){

	printf("\123\122\111\116\101\124\110\n");
	//        S   R   I   N   A   T   H  
	printf("\x4B\x4F\x49\x4C\x41\x4B\x4E\x44\x41\n");
	//         K  O   I   L   A  K    N   D    A
	return 0;


}
