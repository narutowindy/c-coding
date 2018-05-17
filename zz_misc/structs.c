#include <stdio.h>
#include <string.h>

int main(){

	struct Student{
		char name[20];
		char *last;
		int marks;
		int DOY;
	};


	struct Student std;

	strcpy(std.name,"Srinath");
	std.last = "Koilakonda";
	std.marks = 95;
	std.DOY = 1992 ;

	printf("%s %s %d %d \n ",std.name,std.last,std.marks,std.DOY);

	return 0;

}
