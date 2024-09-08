#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	
	long long a,b;
	cin >>  a >>b;
	

 	long long temp;
	
	while(b!=0){
		temp  = a %b;
		a = b;
		b =temp;	
	}
		
	while(a--)
	printf("1");

}