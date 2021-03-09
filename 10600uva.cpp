#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 


vector<int> parent  , used, valid ; 
vector<pair<int,pair<int,int>>> arr ;

bool compare(pair<int,pair<int,int>> &a , pair<int,pair<int,int>> &b ) {
	if(a.second.second <= b.second.second) {
		return true;
	}else {
		return false ;
	}
}

int findset(int a ) {
	if(parent[a] == a){
		return a ;
	}else {
		parent[a] = findset(parent[a]) ;
	}
	return parent[a] ;
}

void uni (int a, int b ) {
	parent[a] = parent[b] ;
}

int kruskal(int flag ){	
	for(int i = 0 ;  i <= arr.size(); i++ ) {
		parent.push_back(i) ;
	}
	int sum = 0 ;
	for(int i = 0 ; i < arr.size(); i++ ){
		if(valid[i] == 1 ){
		int iem = findset(arr[i].first) ;
		int cem = findset(arr[i].second.first)  ;
		if(iem != cem ) {
			if(flag) {
				used[i] = 1 ;
			}
			uni(iem, cem) ;
			sum += arr[i].second.second ;
		}	
		}
	}
	return sum ;
}

int secondmst(int flag ) {
	int val , mn = 1 << 30 ;
	for(int i = 0 ; i < arr.size() ; i++ ){
		if(used[i] == 1) {
			valid[i] = 0 ;
			 val = kruskal(0) ;
			 cout << val << endl ;
			 if(val < mn){
				 mn= val ;
			 }
			 valid[i] = 1 ;
		}
	}
	return val ;	
}

int main (){
	int t;
	cin >> t;
	while(t--){
		int v, e ;
		cin >> v >> e;
		for(int i = 1 ; i <= e ; i++ ){
			int a, b, c; 
			cin >> a >> b >> c ;
			arr.push_back(make_pair(a,make_pair(b,c))) ;
		}
		sort(arr.begin(), arr.end(), compare) ;
		used.assign(e,0) ; 
		valid.assign(e,1) ;

		int sum =  kruskal(1) ;
		int sum1 = kruskal(0) ;
		cout << sum << " " << sum1  << endl ;
		arr.clear();
		parent.clear() ;
		valid.clear() ;
	}	
    return 0;
}
