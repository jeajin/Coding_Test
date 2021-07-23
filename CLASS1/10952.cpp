#include <stdio.h>
int main(){
    int j,i;
    scanf("%d %d",&i,&j);
	while(!(i*j==0)){		 
	printf("%d\n",i+j);
	scanf("%d %d",&i,&j);
	}
    return 0;
}
