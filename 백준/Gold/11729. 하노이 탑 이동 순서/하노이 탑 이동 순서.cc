#include <stdio.h>
#include <math.h> 
char src[1048576]={0,};
char dest[1048576]={0,};
void initEven(int n);
void initOdd(int n);
void Rcopy(int s,int d);
void Lcopy(int s,int d);
int main() {
	int n,t,n4,i,cnt,s=3,d=3;    
    scanf("%d",&n);
	cnt = (int)(pow(2,n))-1;
	printf("%d\n",cnt);
	i=1;
	if(n%2==0){
		initEven(n--);
		Lcopy(s,d);
		n--;
		for(i=0;i<n;i+=2){	
			s*=2;s--;
			d*=2;d++;		
			Rcopy(s,d);
			s*=2;s--;
			d*=2;d++;
			Lcopy(s,d);	
		}
	}
	else{
		initOdd(n--);
		for(i=0;i<n;i+=2){
			Rcopy(s,d);
			s*=2;s--;
			d*=2;d++;
			Lcopy(s,d);	
			s*=2;s--;
			d*=2;d++;
		}
	}
	for(i=1;i<=cnt;i++){
		printf("%d %d\n",src[i]+1,dest[i]+1);
	}
    return 0;
}
void Rcopy(int s,int d){
	int c=1,i;
	for(i=s;i<=d;i++){
		src[i] = (src[c]+2)%3;
		dest[i] = (dest[c++]+2)%3;
	}
}
void Lcopy(int s,int d){
	int c=1,i;	
	for(i=s;i<=d;i++){
		src[i] = (src[c]+1)%3;
		dest[i] = (dest[c++]+1)%3;
	}
}
void initOdd(int n){
	int i=1;
	src[i] = 0;
	dest[i] = 2;
	n--;
	i*=2;	
	while(n){	
		src[i] = 0;
		dest[i] = 1;
		i*=2;
		src[i] = 0;
		dest[i] = 2;		
		i*=2;
		n-=2;		
	}
}
void initEven(int n){
	int i=1;
	while(n){
		src[i] = 0;
		dest[i] = 1;
		i*=2;
		src[i] = 0;
		dest[i] = 2;		
		i*=2;
		n-=2;
	}
}
