#include <bits/stdc++.h>
using namespace std ;

#define ll long long ;
map<string, string > parent ;
map<string, int> sz , r; 

string insertMp(string s ){
	if(parent.find(s) == parent.end() ) {
		parent[s] =s ;
		sz[s] = 1 ;
		r[s] = 0 ;
	}
	return  parent[s] == s ? s : parent[s] = insertMp(s) ;
}

string find(string s ){
	if(parent[s] == s){ 
		return s; 
	}else{
		parent[s] = find(parent[s]);

	}
	return parent[s] ;
}

void join(string s, string t){
	if(insertMp(s) == insertMp(t)) {
		return ;
	}	
	string k = find(s) ;
	string p = find(t) ;
	if(r[k] >  r[p]){
		r[p] += r[k] ;
		parent[p] = k;
		sz[k] += sz[p];
	}else if(r[k] <= r[p] ){
		r[p] += r[k] ;
		parent[k] = p;
		sz[p] += sz[k] ;
	}
	return ;
}

int main(){
	int t;
	cin >>t ;
	while(t--) {
		int a ;
		cin >> a ;
		string s , p ;
			
		for(int i =0; i <a ; i++  ) {
			cin >> s >> p ;
			join(s,p);
			cout << sz[insertMp(s)] << endl ;
		}
	}
}
