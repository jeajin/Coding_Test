#include <stdio.h>
#include <math.h>
int main() {
    int i,j,t=1,b,in,m;
	scanf("%d %d",&i,&j);
	m = i*j;
	//b = i>j? sqrt(i):sqrt(j);
	b = i>j? i:j;
	for(in=2;in<=b;in++){
		if((i%in == 0) && (j%in == 0 )){			
			t*=in;
			i/=in;
			j/=in;
			in=1;
			b = i>j? i:j;
			//b = i>j? sqrt(i):sqrt(j);
		}
	}
	printf("%d %d",t,m/t);
    return 0;
}
