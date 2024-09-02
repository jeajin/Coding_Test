#include <iostream>
using namespace std;
int arr[10001]={0,};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);    
    int N;
    cin >> N;   
    
    int t;
 	for(int i=0;i<N;i++){
		cin >>t;
		arr[t]++;
	}
	
	for(int i=0;i<=10000;i++){
		if(arr[i]){
			for(int j=0;j<arr[i];j++){
				printf("%d\n",i);
			}
		}
	}
}