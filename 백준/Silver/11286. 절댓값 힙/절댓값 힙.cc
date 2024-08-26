#include <iostream>
#include <queue>
#include <functional> 
using namespace std;

struct Student {
    int num;
    int ab;
    Student(int num) : num(num), ab(num>-num?num:-num) {}
    bool operator<(const Student s) const {
    	if(this->ab != s.ab){
    		return this->ab > s.ab;
		}else{
			return this->num > s.num;
		}
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    priority_queue<Student> abheap; 
	 
	int N;
    cin >> N ;
    
    
    
    int temp;
    for(int i = 0 ; i < N ; i++ ){
    	cin >> temp;
    	if(!temp){
    		if(abheap.empty()){
    			printf("0\n");
			}else{
				printf("%d\n", abheap.top().num);
				abheap.pop();
			}
		}else{
			abheap.push(temp);
		}
	}
}