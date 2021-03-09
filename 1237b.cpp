#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	int n ;
	cin >> n ; 
	vector<int> in(n) , out(n) ; 
	for(int i = 0 ; i < n ; i++ ) {
		cin >> in[i] ; 
	}

	for(int i = 0 ; i< n ; i++ ) {
		cin >> out[i] ;
	}
	map<int,int> mp ; 
	int p1 = 0 , p2 = 0 ; 
	int cnt = 0; 
	while(p1 < n &&   p2 < n ) {
		if(in[p1] == out[p2] ) {
			p1++ , p2++ ;
		}
		else if(mp.find(in[p1]) != mp.end()){
			p1++ ;
		}else {
			mp.insert(make_pair(out[p2], 1)) ;
			cnt++ ;
			p2++ ;
		}
	}
	cout << cnt << "\n"; 
    return 0;

}
