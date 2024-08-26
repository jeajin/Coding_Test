#include <stdio.h>
#include <math.h>
int main() {
	int i,k,m,c,s;
	int num[246912]={};
		scanf("%d",&m);	
	while(m){
		
		for(i=m+1;i<=m*2;i++){	
			s=1;	
			if(num[i]==1)continue;
			for(k=2;k<=sqrt(i);k++){
				if(i%k==0){
					s=0;					
					break;
				}
			}		
			if(s){			
				num[i]=1;
			}		
		}		
		c=0;
		for(k=m+1;k<=m*2;k++){
			if(num[k]==1)c++;
		}
		printf("%d\n",c);
		scanf("%d",&m);	
	} 
	return 0;
}