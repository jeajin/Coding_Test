#include <iostream>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	
	long long a,b;
	cin >>  a >>b;	

 	long long temp;
	
	while(b>0){
		temp  = a %b;
		a = b;
		b =temp;	
	}
		
	cout << string(a,'1') << '\n';
	//printf("%s",string(a,'1'));

}