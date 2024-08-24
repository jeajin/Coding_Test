#include <iostream>
#include <algorithm> 
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
	 
	int N;
    cin >> N ;
    pair<int,int> arr[N];
    int temp;
    for(int i = 0 ; i < N ; i++ ){
    	cin >> temp;  
    	arr[i]={temp,i};
	}
	sort(arr,arr+N);
    
    int max=0;
    for(int i = 0 ; i < N ; i++ ){
    	if (max < arr[i].second-i)
    	max = arr[i].second-i;
	}
	printf("%d",max+1);
}