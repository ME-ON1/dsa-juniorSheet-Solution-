#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	ll n , d ;
	cin >> n >> d ;

	ll t; 
	cin>> t ;
	for(int i = 0 ; i < t ; i++ ) {
		ll x ,y ; 
		cin >> x >> y ;
		ll sum = x + y , dif = x - y ;

		if(sum >= d && sum <= 2*n - d && dif >= -d && dif <= d) {
			cout << "YES" << "\n" ;
		} else {
			cout << "NO" << "\n" ;
		}
	}
    return 0;
}
