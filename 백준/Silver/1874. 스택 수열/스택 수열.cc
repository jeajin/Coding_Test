#include <iostream>
#include <deque>
using namespace std;
struct A {
    int num;
    int index; 
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    cin >> N ;
    
    int A[N],A_index=0;
    
    for( int i = 0 ; i < N ; i++ ){
    	cin >> A[i];
	}
    
    int stack[N], stack_index=0, num=1;
    char answer[N*2+1];
    int answer_index=0;
    bool result = 1;
    

    for(int i=0;i<N;i++){
    	int su = A[A_index++];
    	
    	if(su>=num){
    		do{
    			stack[stack_index++] = num++;
    			answer[answer_index++]='+';
    			
			}while(su>=num);
			stack_index--;
			answer[answer_index++]='-';
		}
		else{
			int n = stack[--stack_index];
			if(n > su){
				printf("NO\n");
				result = 0;
				break;
				
			}
			else{//eq == su
				answer[answer_index++]='-';
			}
		}    	
	}    
	if(result){
		for( int i = 0 ; i < answer_index ; i++ ){
			printf("%c\n",answer[i]);
		}
	}
}