#include <stdio.h>
int main(){
	int num,max=1;
	scanf("%d",&num);	
	while(max < num) max*=2;	
	printf("%d",2*num-max);
	return 0;
}