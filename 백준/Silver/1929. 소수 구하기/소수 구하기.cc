#include <iostream>
using namespace std;
bool prime[1000001];
int start,endN;
int mul;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	cin >> start >> endN;
	fill_n(prime, endN+1, 1); 
 	prime[1]=false;
 	mul=2;
	while((mul+=2)<=endN){
		prime[mul]=false;
	}
	for(int i=2;i*i<=endN;){
		if(prime[i]){
			mul=i*i;
			do{
				prime[mul]=0;
			}
			while((mul+=i)<=endN);
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