#include <stdio.h>
int main(){
	char text[80]={};
	int index,sum,count,i,j;
	scanf("%d",&i);
	for(j=0;j<i;j++){
	scanf("%s",text);
	index=0;
	sum=0;
	count=1;
	while((text[index])=='O'||(text[index])=='X'){
		if((text[index])=='O'){
			sum +=count++;
		}else count=1;
		text[index]=' ';
		index++;
	}		
	printf("%d\n",sum);
}
	
    return 0;
}
