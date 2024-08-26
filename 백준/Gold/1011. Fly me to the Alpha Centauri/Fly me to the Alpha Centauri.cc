#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	long long T,X,Y,i;
	int c;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d",&X,&Y);
		c=Y-X;
		if((int)(sqrt(c-sqrt(c))+0.5)==(int)(sqrt(c)+0.5))
		{	
			printf("%d\n",(int)(sqrt(c)+0.5)*2);
		}
		else{
			printf("%d\n",(int)(sqrt(c)+0.5)*2-1);
		}
	}
	return 0;
}