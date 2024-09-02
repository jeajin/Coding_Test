#include <iostream>

using namespace std;
int d;

bool isprime(int num){
	for(int i=2;i * i <= num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
void dfs(int num,int depth){	
	if(d==depth) printf("%d\n",num);
	else{
		depth++;
		for(int i=1;i<10;i+=2){
			if(isprime(num*10+i))
			dfs(num*10+i,depth);
		}
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);     
    
	cin >> d ;
	
	dfs(2,1);
	dfs(3,1);
	dfs(5,1);
	dfs(7,1);
}