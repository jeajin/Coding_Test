#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	
	long long a,b;
	cin >>  a >>b;	
	
	while(b>0){
		swap(a%=b,b);
	}
		
	cout << string(a,'1') << '\n';

}