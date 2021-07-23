#include <stdio.h>
int main(){
	int a[10],b[42]={},c=0,i;
  	for(i=0;i<10;i++){
 		scanf("%d",&a[i]);
 		b[a[i]%42]=1;
	}
	for(i=0;i<42;i++){
 		c+=b[i];
	}
	printf("%d",c);
    return 0;
}
