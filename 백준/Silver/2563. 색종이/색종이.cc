#include <stdio.h>
int main() {
	int n,x,y,i,j,c=0;
	char w[10000]={0};
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&x,&y);
		for(i=x;i<x+10;i++){
			for(j=y;j<y+10;j++){				
				if((i*100+j)<10000 &&w[i*100+j]==0){
					w[i*100+j]=1;
					c++;
				}
				
			}
		}
	}
	printf("%d",c);
}
