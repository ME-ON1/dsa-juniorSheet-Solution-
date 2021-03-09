#include <bits/stdc++.h>
using namespace std ;

#define ll long long 

vector<pair<int,int>> arr[101] ;
int vis[101] = {0} ;
bool dfs(int u, int v, int ve) {
	vis[u] = 1 ;
	if(u == v){
		return 1;
	}

	for(int i =0 ; i< arr[u].size(); i++ ){
		int e = arr[u][i].first ;
		int clr = arr[u][i].second; 
		if(!vis[e] && clr == ve){
			if(dfs(e, v, clr)) {
				return 1;
		       	}
		}
	}
	return 0;
		
}

int main() {
	int n, m  ;
	cin >> n >> m ;
	for(int i = 1; i <= m ;i++ ){
		int a , b , c; 
		cin >> a >> b >>c ;
		arr[a].push_back(make_pair(b,c));
		arr[b].push_back(make_pair(a,c)) ;
	}
	int t ; cin >> t ;
	for(int i = 0 ; i< t; i++){
		int u, v ;
		cin >> u >> v ;
		int ans =0 ;
		for(int i = 1; i < 101 ; i++) {

		memset(vis,0, sizeof(vis)) ;
			if(dfs(u,v,i)){
				ans++ ;
			}
		}
		cout << ans << endl ;
	}
	return 0;
}
