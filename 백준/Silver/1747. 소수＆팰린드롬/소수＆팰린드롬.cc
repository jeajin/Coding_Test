#include <iostream>
#include <math.h>
using namespace std;
#define max 1003002
bool prime[max];
int po[7];
int start;
int mul;
int is_palindrome(int num){
	
	int i=0;
	while(num){
		po[i++]=num%10;
		num/=10;
	}
	int s=0;i--;
	
	while(s<i){
		if(po[s++]!=po[i--]){
			return 0;
		}
	}
	return 1;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	cin >>  start;
	fill_n(prime, max+1, 1); 
 	prime[1]=false;
    int s = sqrt(max);
	for(int i=2;i<=s;){
		if(prime[i]){
			mul=i*i;
			do{
				prime[mul]=0;
			}
			while((mul+=i)<=max);
		}
		while(prime[++i]==0){
		}		
	}

	while(1){
		if(prime[start] && is_palindrome(start)){
			printf("%d\n",start);
			break;
		}
		start++;
	}


}