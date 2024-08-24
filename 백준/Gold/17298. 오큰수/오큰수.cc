#include <iostream>
#include <deque>
using namespace std;
struct p {
    int num;
    int index; 
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    cin >> N ;
    
    int A[N];
    deque<p> dq;
    int temp;
    for( int i = 0 ; i < N ; i++ ){
    	cin >> temp ;
    	while(!dq.empty() && dq.back().num < temp){
    		A[dq.back().index]=temp;
    		dq.pop_back();
		}
		dq.push_back({temp,i});
	}
	while(!dq.empty()){
    	A[dq.back().index]=-1;
    	dq.pop_back();
	}
    
    for(int i=0;i<N;i++){
    	printf("%d ",A[i]);
	}
}