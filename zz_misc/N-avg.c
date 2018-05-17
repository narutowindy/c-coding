#include <stdio.h>

int main(void){

	int N,i,sum=0;

	scanf("%d",&N);
	int a[N];
	for(i=0;i<= N-1 ; i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}

		printf("%d/%d = %1.2f\n",sum,N,1.0*sum/N);


	return 0;



}
