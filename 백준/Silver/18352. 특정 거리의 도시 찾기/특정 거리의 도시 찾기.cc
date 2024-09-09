#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define max 300000
vector<int> edge[max+1];
int visited[max+1]={0,};
queue<pair<int, int>> q;
int n,m,k,x;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    		

	cin >> n >> m >> k >> x;
	
	for(int i=0;i<m;i++){
		int in,out;
		cin >> in >> out;
		edge[in].push_back(out);
	}
	
	q.push(make_pair(x, 0));
    while (!q.empty()) {
        int now = q.front().first;
        int d = q.front().second;
        q.pop();

        if (now != x && !visited[now]) {
            visited[now] = d;
        }

        for (int i = 0; i < edge[now].size(); i++) {
            if (!visited[edge[now][i]]) {
                q.push(make_pair(edge[now][i], d + 1));
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (visited[i] == k) {
            cout << i << endl;
            cnt++;
        }
    }
    if (cnt == 0) {
        cout << -1 << endl;
    }

}