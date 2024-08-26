#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long s=0,e,c=0,jr[2000],temp,t;
	int j;
	scanf("%ld",&j); 
	temp=j;
	while(temp){scanf("%ld",&jr[j-(temp--)]);}
	sort(jr,jr+j);	
	temp=j;
	while(temp--){
		long k = jr[temp],s=0,e=j-1;
		while(s<e){
			t = jr[s]+jr[e];
			if(t==k){
				if(s!=temp&&e!=temp){
					c++;
					break;
				}
				else if(s==temp) s++; 
				else if(e==temp) e--;
			}
			else t > k ? e--:s++;
		}
	} 	
	printf("%ld",c);	
    return 0;
}