#include <iostream>
using namespace std;

int prime[1000001];
int start,endN;

void set_prime_multi_zero(int num){
	int mul=num;
	while((mul+=num)<=endN){
		prime[mul]=0;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	cin >> start >> endN;
	fill_n(prime, endN+1, 1); 
 	prime[1]=0;
 	set_prime_multi_zero(2);
	for(int i=2;i*i<=endN;){
		if(prime[i]){
			set_prime_multi_zero(i);
		}
		while(prime[++i]==0){
		}		
	}
	for(int i=start;i<=endN;i++){
		if(prime[i]){
			printf("%d ",i);
		}
	}
}