#include <stdio.h>
#include <string.h>
int main() {
	int i[5];
	scanf("%d",&i[0]);
	scanf("%d",&i[1]);
	scanf("%d",&i[2]);
	scanf("%d",&i[3]);
	scanf("%d",&i[4]);
	printf("%d",(i[0]*i[0]+i[1]*i[1]+i[2]*i[2]+i[3]*i[3]+i[4]*i[4])%10);
}
