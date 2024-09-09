#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define max 10000
vector<int> edge[max+1];
int answer[max+1];
int visited[max+2]={0,};
int n,m,k,x;
int maxNum = -321;
int ranswer[max+1];
int tindex=0;
void dfs(int index){
	visited[index]=1;
	for(int i=0;i<edge[index].size();i++){
		int t = edge[index][i];
		if(t && !visited[t]){
			answer[t]++;
			dfs(t);			
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    		

	cin >> n >> m ;
	
	for(int i=0;i<m;i++){
		int in,out;
		cin >> in >> out;
		edge[in].push_back(out);
	}
	
	for(int i=1;i<=n;i++){
		fill_n(visited,n+1,0);
		dfs(i);
	}
	
	for(int i=1;i<=n;i++){
		maxNum= maxNum>answer[i]?maxNum:answer[i];
	}
	for(int i=1;i<=n;i++){
		if(maxNum==answer[i]){
			printf("%d ",i);
		}
	}
	
}