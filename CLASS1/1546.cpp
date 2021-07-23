#include <stdio.h>
int main(){
	int a,temp,i,sum=0,j,max=0;
 	scanf("%d",&a);
	
	for(i=0;i<a;i++){
 		scanf("%d",&j);
 		if(max<j)max=j;
 		sum+=j; 		
	}
	printf("%lf",(double)sum/max*100/a);
    return 0;
}
