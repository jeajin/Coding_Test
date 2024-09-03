#include <iostream>
#include <math.h>
using namespace std;
bool prime[1000001];
long long start,mul;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	cin >>  start;
    long long s2 = sqrt(start);
	fill_n(prime, s2+1, 1); 
    long long count = 1;

	    
	for(long long i=2;i<=s2;i++){
		if(prime[i]){
			if(start%i==0){
				count*=(i-1);
				start/=i;
				while(start%i==0){
					count*=i;
					start/=i;
				}
			}
			for(mul=i*i;mul<=s2;mul+=i){
				prime[mul]=false;
			}			
		}		
	}
	if(start!=1)count*=(start-1);
	printf("%lld",count);

}