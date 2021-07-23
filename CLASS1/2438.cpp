#include <stdio.h>
int main(){
    int c,i,j;
    scanf("%d",&c);
	for(i=0;i<c;i++){
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
    return 0;

