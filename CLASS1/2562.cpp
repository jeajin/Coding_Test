#include <stdio.h>
int main(){
	int i,min=1000000,max=-1000000,temp;
  	for(i=0;i<9;i++){
  		scanf("%d",&temp);
  		if(max<temp){
  			max=temp;
  			min=i+1;
		  }
	}
	printf("%d\n%d",max,min);
    return 0;
}
