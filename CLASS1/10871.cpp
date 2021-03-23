#include <stdio.h>
int main(){
    int n,x,j,i;
    scanf("%d %d",&n,&x);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		if(j<x)printf("%d ",j);
	}
    return 0;
}
