#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define MOD 1e9 + 7
map<int, ll > mp ;
ll N ;


int main() {
	ll n ;
	cin >> n ;


	ll dp[n +1 ] = {};
	dp[0] = 1 ;


	for(int i = 1 ;  i <= n ; i++ ) {
		for(int j = 1 ; j <= 6 ; j++ ) {
			if(i >= j){
				dp[i] += dp[i-j];
				dp[i] = dp[i]%1000000007;
			}
		}
	}
	cout << dp[n ] << endl ;
}
