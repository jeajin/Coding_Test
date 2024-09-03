#include <iostream>
#include <math.h>
using namespace std;
#define max 1000001
bool nn[max];

long long start,endN;
long long mul,temp,tt,ttt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	cin >>  start >> endN;
	
	fill_n(nn, max, 1); 	
    long long s2 = sqrt(endN);
    
	for(long long i=2;i<=s2;i++){
		mul=i*i;
		tt = start/mul;
		ttt = endN/mul;
		if(start%mul!=0)tt++;
        for(long long j=tt;j<=ttt;j++){
			nn[mul*j-start]=false;
		}
		
	}
	
	temp = -1;
	int count = 0;
	while(++temp<(endN-start+1)){
		if(nn[temp])count++;	
	}
	printf("%d",count);

}