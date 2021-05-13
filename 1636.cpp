#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define MOD 1000000007

int main ( ){

	ll n , x ;
	cin >> n >>x ;
	int dp[x +1 ] = {0} ;
	dp[0] = 1 ;
	vector<ll> ar(n) ;

	for(int i = 0 ; i < n ;i++ ) {
		cin >> ar[i] ;
	}

	for(auto j : ar) {
		for(int i = 1; i <= x  ; i++ ) {
			if( i - j >= 0 ) {
				dp[i] += dp[i - j] ;
				dp[i] = dp[i] %  1000000007;
			}
		}
	}

	cout << dp[x] << endl ;
    return 0;
}
