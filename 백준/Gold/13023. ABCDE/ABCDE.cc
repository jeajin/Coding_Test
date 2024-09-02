#include <iostream>
#include <vector>
using namespace std;
#define num 2001
vector<int> graph[num];
bool visited[num]={0,};
int n, e,a=0;

void dfs(int index,int depth){
	if(depth==5 || a==1){
		a=1;
		return;
	}
	visited[index] =1;
	depth++;
	for(int i=0; i<graph[index].size(); i++){
		int ni = graph[index][i];
        if(!visited[ni]){
        	dfs(ni, depth);
		}
	}
	visited[index] =0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);    
    
	cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    for (int i = 0; i < n; i++) {
    	dfs(i,1);
    	if(a) break;
    }

    
    if(a){
    	printf("1\n");
	}else printf("0\n");
}