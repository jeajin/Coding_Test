#include <stdio.h>
#include <string.h>
int main() {
	int i,o=0;
	char a[4],b[4];
	scanf("%s %s",a,b);
	for(i=2;i>=0;i--){
		if(a[i]>b[i]){o=1;break;}
		if(a[i]<b[i]){o=2;break;}
	}
	if(o==1)printf("%c%c%c",a[2],a[1],a[0]);
	else if(o==2)printf("%c%c%c",b[2],b[1],b[0]);
	return 0;
}
