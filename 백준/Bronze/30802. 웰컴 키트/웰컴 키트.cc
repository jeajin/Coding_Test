#include <stdio.h>
int main(){
	
int num,s[6],i,j,k,t=0,ct=0,cp=0;
	scanf("%d",&num);
	scanf("%d %d %d %d %d %d",s,s+1,s+2,s+3,s+4,s+5);
	scanf("%d %d",&i,&j);
	cp = num%j;
	for(k=0;k<6;k++){
		t=s[k]/i;
		if(s[k]>i*t){
			t++;
		}
		ct+=t;
	}
	printf("%d\n",ct);
	printf("%d %d",num/j,num%j);
}