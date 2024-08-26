#include <stdio.h>
int sum[1025][1025]={0,};
int main(){
	int d,c,i,j,x_one,x_two,y_one,y_two;
	long long num,ans;
	scanf("%d %d\n",&d,&c);
	for(i=1;i<=d;i++){
		for(j=1;j<=d;j++){
			scanf("%d",&num);
			  if (i == 1) {
                sum[i][j] = sum[i][j - 1] + num;
            }
            else if (j == 1){
                sum[i][j] = sum[i - 1][j] + num;
            }
            else {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + num;
            }
		}
	}	
	for(i=1;i<=c;i++){	
		scanf("%d %d %d %d",&x_one,&y_one,&x_two,&y_two);
		ans = sum[x_two][y_two] - sum[x_two][y_one - 1] - sum[x_one-1][y_two] + sum[x_one - 1][y_one - 1];	
		printf("%lld\n",ans);
	}			
    return 0;
}
