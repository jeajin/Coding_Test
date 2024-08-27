#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N,in;
    cin >> N >> in;
    
	int arr[N];
	
	for(int i=0;i<N;i++){cin >> arr[i];}
	sort(arr,arr+N);
	
	printf("%d",arr[in-1]);
}