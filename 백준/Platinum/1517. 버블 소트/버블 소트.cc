#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
vector<long long> arr;
long long temp[500001];
long long r = 0;


void bubb(int s,int e,int m){
	for(int i=s;i<=e;i++){
		temp[i] = arr[i];
	}
	int k =s;
	int i1 =s;
	int i2 =m+1;
	while((i1<=m) && (i2<=e)){
		if(temp[i1] >temp[i2]){
			r = r + i2 - k ;
			arr[k]=temp[i2];
			i2++;
			k++;
		}else{
			arr[k]=temp[i1];
			i1++;
			k++;
		}
	}	
	while(i1<=m){
		arr[k]=temp[i1];
		i1++;
		k++; 
	}
	while(i2<=e){
		arr[k]=temp[i2];
		i2++;
		k++;		
	}
}

void bubble_sort(int s, int e) {
	
	if((e-s)<1) return;
	int m =(e + s) >> 1;
	bubble_sort(s,m);
	bubble_sort(m+1,e);
	bubb(s,e,m);
	
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);    
    int N;
    cin >> N;    
    int t;
    for(int i=0;i<N;i++){
		cin >> t;
		arr.push_back(t);
	}
	bubble_sort(0,N-1);	
	printf("%lld",r);
}