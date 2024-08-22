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

    int N, L;
    cin >> N >> L;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    deque<A> dq;
    for (int i = 0; i < N; i++) {
    	while (!dq.empty() && dq.back().num > arr[i])
            dq.pop_back();
 		dq.push_back({ arr[i], i });   	
 		
        if (dq.front().index <= i-L) 
            dq.pop_front();
        
        cout << dq.front().num << " "; 
    }
}
