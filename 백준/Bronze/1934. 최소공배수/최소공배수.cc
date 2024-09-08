#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    	
	
	int num;
	cin >>  num;
	
	int arr[num][2];
	
	for(int i=0; i<num ; i++){
		cin >> arr[i][0] >> arr[i][1];
	}
 	int temp;
 	for(int i=0;i<num;i++){
 		int big = arr[i][0]>arr[i][1]?arr[i][0]:arr[i][1];
 		int small = big==arr[i][0] ? arr[i][1]:arr[i][0];
 		
 		while(small!=0){
 			temp  = big %small;
			big =small;
			small =temp;	
		}
		printf("%d\n",arr[i][0]*arr[i][1]/big);
	}

}