#include <stdio.h>
#include <math.h>
int main() {
	int i,max,sum=0,s=10001,k,t;
	scanf("%d %d",&i,&max);	
    if(i==1)i++;
	for(i;i<=max;i++){
		t=1;		
		for(k=2;k<=sqrt(i);k++){
			if(i%k==0){
				t=0;					
				break;
			}
		}		
		if(t){			
		printf("%d\n",i);
		}		
	}
	return 0;
}