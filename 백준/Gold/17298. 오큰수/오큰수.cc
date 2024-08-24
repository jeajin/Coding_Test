#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    cin >> N ;
    
    int A[N];
    int dq[N],dq_index=0;
    int temp;
    for( int i = 0 ; i < N ; i++ ){
    	cin >> temp ;
    	while(dq_index && A[dq[dq_index-1]] < temp){
    		A[dq[--dq_index]]=temp;
		}
		A[i]=temp;
		dq[dq_index++]=i;
	}
	
	while(dq_index){
    	A[dq[--dq_index]]=-1;
	}
    
    for(int i=0;i<N;i++){
    	printf("%d ",A[i]);
	}
}