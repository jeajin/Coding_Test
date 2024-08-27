#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N,in;
    cin >> N >> in;
    
	vector<int> arr(N);
	
	for(int i=0;i<N;i++){cin >> arr[i];}
	nth_element(arr.begin(), arr.begin() + in - 1, arr.end());
	
	printf("%d",arr[in-1]);
}