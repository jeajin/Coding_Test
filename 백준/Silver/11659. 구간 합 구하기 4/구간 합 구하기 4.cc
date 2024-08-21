#include <stdio.h>
int main() {
	int n,m,in=0,i[100001],j[100001],sum[100001];
	int num,ans;
	sum[0]=0;
	scanf("%d %d\n",&n,&m);
	in=1;
	while(n--){
		scanf("%d",&num);
        sum[in] = sum[in - 1] + num;
        //printf("%d ",sum[in]);
        in++;
	} 
	in=0;
	while(m--){
		scanf("%d %d",&i[in],&j[in]);
		in++;
	}	
	m=in;
	in=0;
	while(m--){
	    ans = sum[j[in]] - sum[i[in] - 1];
		printf("%d\n",ans);	
		in++;
	}
	
	
		
    return 0;
}
