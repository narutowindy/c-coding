#include <stdio.h>

int main(){

// FILE * fopen(const char * restrict filename , const char * restrict mode ) ;
// modes  {   r , w , a, r+ , w+ , a+ }
//  success returns fp , Null on failure
//
//int fclose ( FILE * stream );
// closed previously opened stream success 0  , Failure EOF -1 

//int fprintf() ;
//int fscanf() ;

//int counter=0 ;
//w+ : creates if file doesnt exist
//r+ : neither creates nor removes the contents inside;
//

FILE *fp= fopen("text.txt","r+");
fprintf(fp,"fprintf\n");
fputs("fputs\n",fp);
fclose(fp);

return 0;
}
