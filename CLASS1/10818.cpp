#include <stdio.h>
int main(){
	int i,j,min=1000000,max=-1000000,temp;
	scanf("%d",&j);
  	for(i=0;i<j;i++){
  		scanf("%d",&temp);
  		if(min>temp)min=temp;
  		if(max<temp)max=temp;
	}
	printf("%d %d",min,max);
    return 0;
}
