#include <stdio.h>
#include <string.h>
int main() {
	int what[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},i;
	char text[100];
	scanf("%s",text);
	for(i=0;i<strlen(text);i++){
		if(what[text[i]-97]==-1)
		what[text[i]-97]=i;
	}
	for(i=0;i<26;i++){
		printf("%d ",what[i]);
	}
	return 0;
}
