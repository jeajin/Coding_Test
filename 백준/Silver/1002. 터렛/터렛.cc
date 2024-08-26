#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
	int T,x1,y1,r1,x2,y2,r2,br,sr;
	double a,d;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		br=r2>r1?r2:r1;
		sr=r2>r1?r1:r2;
		d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		if( x1==x2 && y1==y2 && r1==r2 )
			printf("-1\n");
		else{			
			if( (br+sr)>d && (br-sr)<d )
				printf("2\n");
			else if( (br+sr)==d || (br-sr)==d )
				printf("1\n");
			else
				printf("0\n");			
		}
	}

	return 0;
}