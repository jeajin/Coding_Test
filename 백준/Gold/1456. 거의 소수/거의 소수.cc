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
	bool* prime = new bool[s2 + 1];
	
	

	fill_n(prime, s2+1, 1); 
 	prime[1]=false;
 	mul=2;


	for(long long i=2;i<=s4;){
		if(prime[i]){
			mul=i*i;
			do{
				prime[mul]=false;
			}
			while((mul+=i)<=s2);
		}
		while(prime[++i]==0){
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