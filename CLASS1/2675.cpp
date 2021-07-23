#include <stdio.h>
#include <string.h>
int main() {
	int i,j,k,m;
	char text[20];
	scanf("%d",&i);
	for(j=0;j<i;j++){
		scanf("%d %s",&m,text);		
		for(k=0;k<m*strlen(text);k++){
			printf("%c",text[k/m]);
		}
		printf("\n");
	}

}
