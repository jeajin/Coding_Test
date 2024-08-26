#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int s=0,e,sum=1,c=0,jr[15000],temp;
	
	//재료의 수 
	int j;
	scanf("%d",&j);
	e=j-1;
	//재료 번호의 합
	int n; 
	scanf("%d",&n);
	
	
	
	//재료받기 
	temp=j;
	while(temp){scanf("%d",&jr[j-(temp--)]);}
	
	//정렬하자
	sort(jr,jr+j);
	sum = jr[0];
	
	while(s<e){
		temp = jr[s]+jr[e];
		if(temp > n){
			e--;		
		}
		else if(temp < n){
			s++;
		}
		else{
			c++;
			e--;
			s++;
		}
	}
	printf("%d",c);
	
    return 0;
}