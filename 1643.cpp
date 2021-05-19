#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	ll n ;
	cin >> n ;
	vector<ll> ar(n + 1) ;
	ll mx = INT_MIN ;
	ll sum = 0;
	for(ll i = 1 ; i <= n ; i++ ) {
		ll a ;
		cin >> a;
		sum += a ;

		if(sum >  mx) {
			mx = sum ;
		}
		if(sum < 0 ) {
			sum = 0 ;
		}
	}
	cout << mx << endl ;
    return 0;
}
