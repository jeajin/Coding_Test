#include <iostream>
using namespace std;

long long a,b,c,x=0,y=1,tx,ty;
int gcd(int a,int b){
	while(b>0){
		swap(a%=b,b);
	}
	return a;
}
void gg(int a,int b){
	if(a%b!=0){
		gg(b,a%b);
	}else{return;}
	tx=x;
	x=y;
	y=tx-(y*(a/b));	
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    		
	cin >>  a >> b >> c ;
	if(c%gcd(a,b)!=0) printf("-1");
	else{
		long long d;
		if(a>b){d=a;a=b;b=d;}
		gg(a,b);
		printf("%d %d",x*c/gcd(a,b),y*c/gcd(a,b));
	}
}
