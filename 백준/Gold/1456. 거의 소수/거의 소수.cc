#include <iostream>
#include <math.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);  
	long long start,endN;  	
	cin >> start >> endN;
	long long s4 = pow(endN,0.25);
    long long s2 = pow(endN,0.5);
	long long mul;
    bool prime[10000001];
    
	fill_n(prime, s2+1, 1); 

	for(long long i=2;i<=s4;i++){
		if(prime[i]){
			for(mul=i*i;mul<=s2;mul+=i){
				prime[mul]=false;
			}
		}	
	}
	
	double t;
	long count=0;
	double dendN = (double)endN;
	for(long long i=2;i<=s2;i++){		
		if(prime[i]){
			t = i;
			do{
				t*=i;
				if(t>=start){
					count++;
				}				
			}while(t<=(dendN/i));
		}
	}
	printf("%ld",count);
}