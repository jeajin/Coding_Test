#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
#define num 1001
bool edge[num][num]={0,};
bool visited[num]={0,};
int n, e;

void dfs(int index){
	visited[index]=1;
	for(int i=1;i<=n;i++){
		int t= edge[index][i];
		if(t && !visited[i] ){
			dfs(i);		
		}
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);    
    
	cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        edge[t1][t2] = 1;
        edge[t2][t1] = 1;
    }

    int cnt = 0;
    
    for (int i = 1; i <= n; i++) {
    	if(!visited[i]){
    		cnt++;
    		dfs(i);
		}
    }
    
    cout << cnt << endl;
}