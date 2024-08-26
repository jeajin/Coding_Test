#include <stdio.h>
int main() {
    int n,i,j;
    char s[1000];
	scanf("%d",&n);
    while(n--) {
        scanf("%s",s);
        printf("%c",s[0]);
        i=0;
        while(s[i++]){
        	if(s[i]>=65 && s[i]<=112)
        		continue;
        	else
        		break;
			
		}
		i--;
		printf("%c\n",s[i]);
		
    }


    return 0;
}
