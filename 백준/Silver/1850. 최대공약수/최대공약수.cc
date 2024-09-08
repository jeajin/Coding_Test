#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	
	long long a,b;
	cin >>  a >>b;
	

 	long long temp;
	long long big = a>b?a:b;
	long long small = big==a? b:a;
	
	while(small!=0){
		temp  = big %small;
		big = small;
		small =temp;	
	}
	while(big--)
	printf("1");

}