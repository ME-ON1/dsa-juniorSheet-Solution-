#include <bits/stdc++.h>
using namespace std ;
#define INF 1e9
#define ll long long

int main ( ){
	int n ;
	cin >> n;
	vector<vector<int>> dp(n + 1 , vector<int> (3,INF)) ;
	vector<int> ar(n) ;

	for(int i = 0 ; i < n ; i++)
		cin >> ar[i] ;

	dp[0][0] = 1 ;
	if(ar[0] == 1 ){
		dp[0][1] = 0 ;
	}
	if(ar[0] == 2) {
		dp[0][2] = 0 ;
	}
	if(ar[0] == 3 ){
		dp[0][2] = dp[0][1] = 0 ;
	}

	for(int i = 1 ; i < n ; i++ ) {
		dp[i][0] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2])) ;

		if(ar[i] == 1 || ar[i] == 3) { //contest
			dp[i][1] = min(dp[i-1][0], dp[i-1][2]) ;
		}
		if(ar[i] == 2 || ar[i] == 3){
			dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
		}
	}
	//for(int i = 0 ; i < n ; i++ ) {
		//for(int j = 0 ; j < 3 ; j++ ) {
			//cout << dp[i][j] << " " ;
		//}
		//cout << endl ;
	//}

	cout << min(dp[n -1][0], min(dp[n-1][1], dp[n-1][2])) << endl ;
	return 0;
}
