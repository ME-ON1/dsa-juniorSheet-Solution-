#include <bits/stdc++.h> 
using namespace std ; 

const int mx = 150123 ;
int vis[mx] = {-1} ;
vector<int> g[mx] ;

void dfs(int i, int & cnt_ed, int & cnt_ver) {
	assert(!vis[i]); 
	cnt_ver++ ;
	cnt_ed += g[i].size() ;

	for(auto a : g[i]){
		if(!vis[a]){
			dfs(a ,cnt_ed, cnt_ver) ;
		}
	}
}

int main (){
	int n , m ;
	cin >> n >> m ;
	while(m--) {
		int a ,b; 
		cin >> a >> b ;
		g[a].push_back(b);
		g[b].push_back(a); 
	}	
	
	for(int i = 1 ; i <= n; ++i  ){
		if(!vis[i]){
			int cnt_ed = 0 , cnt_ver = 0 ;
			dfs(i, cnt_ed, cnt_ver) ; if(cnt_ed != (long long )cnt_ver * (cnt_ver -1)){
				puts("NO");
				return 0 ;
			}
	}
	}
	puts("YES"); 
    return 0;
}
