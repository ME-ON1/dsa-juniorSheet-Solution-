#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n, sum  ;
	cin >> n >> sum ;
	vector<int> dp(sum +1 , 100000009 ) ;
	vector<int> ar(n) ;
	dp[0] = 0 ;
	for(int i = 0; i < n ;i++ ){
		cin >> ar[i] ;
	}
	for(int i = 1 ; i <= sum ; i++ ) {
		for(auto j : ar) {
			if( i - j >= 0 ) {
				dp[i] = min(dp[ i - j ] + 1 , dp[i]) ;
			}
		}
	}
	if(dp[sum] == 100000009) {
		cout << -1 << endl ;
	}else {

	cout << dp[sum]  << endl ;
	}
return 0;
}
