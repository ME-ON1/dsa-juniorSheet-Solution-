#include <bits/stdc++.h>
using namespace std ;

#define ll long long


int main ( ){
	ll n ;
	cin >> n ;
	vector<int> dp(n+ 1 , 1e9 ) ;
	dp[0] = 0 ;
	for(int i = 0;  i <= n ; i++ ) {
		for(char j : to_string(i)) {
			dp[i] = std::min(dp[i] , 1 +  dp[i - (j -'0')]) ;
		}
	}
	cout << dp[n ]<< endl ;
	return 0;

}
