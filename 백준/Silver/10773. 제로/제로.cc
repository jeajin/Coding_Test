#include <stdio.h>
int main() {
    int k[100000];
    int kn,i=0,m=0;
    scanf("%d",&kn);
	
    while(kn>0){
    	scanf("%d",&k[i]);
    	if(k[i]>0){
    		i++;
		}else i--;
		kn--;
	}
	
	while(i--){
		m+=k[kn++];
	}
	printf("%d",m);
    return 0;
}
