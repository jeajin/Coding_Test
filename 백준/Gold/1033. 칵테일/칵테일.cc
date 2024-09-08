#include <iostream>
#include <string>
using namespace std;

#define num 10
short edge[num][num]={0,};
bool visited[num]={0,},fi=false;
long long ratio[num]={0,},lcm=1;
int n;
int gcd(int a,int b){
	while(b>0){
		swap(a%=b,b);
	}
	return a;
}

void gg(int aa,int bb,int p,int q){
	int a=p, b=q;
	a = gcd(a,b);

	if(fi){
		long notZeroIndex,ZeroIndex;

		for(int j=0;j<n;j++){
			if(j!=aa)
			ratio[j]*=(p/a);	
		}
	
		ratio[bb]=q*ratio[aa]/a;
		ratio[aa]*=(p/a);
	}else{			
		fi=true;
		ratio[aa]=p/a;
		ratio[bb]=q/a;
	}

}

void dfs(int index){
	visited[index]=1;
	for(int i=0;i<n;i++){
		int t= edge[index][i];
		if(t && !visited[i] ){
			//ratio[i]= ratio[index] *edge[index][i]/edge[i][index];
			//printf("a: %d b: %d %d %d\n",index,i,edge[index][i],edge[i][index]);
			gg(index,i,edge[index][i],edge[i][index]);
			dfs(i);		
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);    		

	cin >>  n ;
	for(int i = 0;i<n-1;i++){
		int a,b,p,q;
		cin >> a>>b>>p>>q;
		edge[a][b] = p;
        edge[b][a] = q;
        lcm = (p*q)/gcd(p,q);
	}	
	
	fill_n(ratio,n,0);
	dfs(0);	
	long long  mgcd= ratio[0];
	for(int i=1;i<n;i++){
		mgcd = gcd(mgcd,ratio[i]);
	}
	for(int i=0;i<n;i++){
		printf("%lld ",ratio[i]/mgcd);
	}
		

}