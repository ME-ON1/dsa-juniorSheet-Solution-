#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 
ll n ; 
vector<int> a ,b ;

int check(){
	for(int i = 0 ;i < a.size()&& i < b.size() ; i++   ){
		if(a[i] > b[i] ) return 1 ;
		if(a[i] < b[i] ) return 2 ;
	}
	return 0 ;
}

int main ( ){
	cin >> n; 

	ll s1 = 0 , s2= 0 ; 
	int last  = 0 ;
	for(int i = 0 ;i < n ; i++ ) {
		int u ; 
		cin >> u; 
		if(u < 0 ){
			//B
			b.push_back(-u) ;
			s2 += abs(u) ;
			last = 2 ; 
		}else {
			a.push_back(u) ;
			s1 += u ;
			last = 1 ;
		}
	}

	if(s1 > s2 )  cout << "first" ;
	else if(s2 > s1 ) cout << "second" ;
	else if(check() == 1 ) cout << "first" ;
	else if(check() == 2 ) cout << "second" ;
	else if(last == 1) cout << "first" ; 
	else if(last == 2 ) cout << "second " ;

    return 0;
}
