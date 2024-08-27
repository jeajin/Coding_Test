#include <iostream>
#include <vector>
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
    
    vector<int> v;
    
    int A[N],A_index=0;
    
    int temp;
    cin >> temp;
    
    v.insert(v.begin(), temp);
    int j;
    for(int i = 1; i < N ; i++){
		cin >> temp;
		for(  j=0 ; j < i; j++){
			if(v[j]>temp){
				break;
			}
		}
		v.insert(v.begin()+j, temp);		
	}
	int sum1=v[0],sum2=sum1;
	for(int i = 1; i < v.size(); i++){
		sum1 += v[i];
		sum2 += sum1;	
	}
	printf("%d",sum2);
}