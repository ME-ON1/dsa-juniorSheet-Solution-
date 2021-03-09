#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

bool compare(pair<int,int>  a, pair<int,int> b) {
	if(a.second > b.second) {
		return true ;
	}else{
		return false ;
	}
}

int main (){
	int n;
	cin>> n;
	vector<pair<int,int>> p(n) ;
	for(int i =0 ; i< n; i++ ) {
		int a, b; 
		cin >> a >> b;
		p[i] = make_pair(a, b) ;
	}

	stable_sort(p.begin(), p.end(), compare) ;
	for(int i = 0 ; i < n; i++ ) {
		cout <<  p[i].first << " " << p[i].second << endl ;
	}
    return 0;
}
