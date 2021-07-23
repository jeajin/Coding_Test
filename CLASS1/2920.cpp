#include <stdio.h>
int main() {
	int i,p=0;
	char text[16];
	scanf("%[^\n]",text);
	p=1;
 	for(i=1;i<=8;i++){
 		if(text[i*2-2]!=i+48)
 		p=0;
 		
 	}
 	if(p!=1)
	{	 
 		p=2;
 		for(i=1;i<=8;i++)
		{
 			if(text[i*2-2]!=57-i)
 			p=0;
 		}
 	}
 	if(p==2)printf("descending");
 	else if(p==1)printf("ascending");
 	else printf("mixed");
}
