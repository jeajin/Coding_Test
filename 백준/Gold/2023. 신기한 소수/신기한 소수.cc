#include <iostream>

using namespace std;
int d;

bool isprime(int num){
	int j = (int)(num/2+1);
	for(int i=2;i<j;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
bool dfs(int num,int depth){
	
	if(!isprime(num)) return 0;
	else{
		if(d==depth) printf("%d\n",num);
		else{
			depth++;
			for(int i=1;i<10;i+=2){
				dfs(num*10+i,depth);
			}
		}
	}
	
	return 1;

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