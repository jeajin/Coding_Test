#include <stdio.h>
int main(){
	int s=1,e=1,sum=1,c=1,n;
	scanf("%d",&n);
	while(!(e==n)){
		if(sum>n){
			sum-=s;
			s++;
		}
		else if(sum<n){
			e++;
			sum+=e;
		}
		else{
			c++;
			e++;
			sum+=e;
		}
	}
	printf("%d",c);
    return 0;
}
