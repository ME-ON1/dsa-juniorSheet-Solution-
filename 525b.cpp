#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	string s;
	cin >> s;
	ll n ;
	cin >> n ;

	vector<ll> sum(s.size(),0), p(s.size(), 0) ;

	for(ll i = 0; i < n ; i++ ) {
		ll a ;
		cin >> a;
		p[a-1]++;
		p[s.size() - a + 1 ]-- ;
	}
	sum[0 ] = p[0] ;
	if(p[0] & 1) swap(s[0], s[s.size() - 1]);
	for(ll i = 1 ; i <= s.size() /2  ; i++ ) {
		sum[i] = sum[i-1] + p[i] ;

		if(sum[i] & 1 ) {
			swap(s[i],s[s.size() - i -1 ]) ;
		}
	}
	cout << s << endl ;
    return 0;
}
