#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int minP(ll a , ll b , ll c , ll p ) {
	ll q  = ceil(p/a)*a ;
	ll w = ceil(p/b)*b ;
	ll e  = ceil(p/c)*c ;

	return min(q , min(w,e)) ;
}

int main ( ){
	int t;
	cin >> t ;
	while(t--) { 
		ll a, b ,c , p ;
		cin >> p >> a >> b >> c ; 

		ll o = minP(a,b,c, p) ;
		cout << abs(o - p) << endl ;
	}
    return 0;
}
