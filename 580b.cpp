#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	int n , d ;
	cin >> n >> d ;
	vector<pair<ll, ll>> ar(n);

	for(int i = 0; i< n; i++){
		ll a, b; 
		cin >> a >> b ;
		ar[i] = make_pair(a,b) ;
	}

	sort(ar.begin(), ar.end()) ;
	ll pre[n+1] = {0} ;


	pre[0] = 0 ;
	for(int i = 0 ; i < n ; i++ ) {
		pre[i+1] = pre[i] + ar[i].second ;
	}

	ll ans = 0 ; 
	for(int i = 0; i < n ; i++ ) {

		int lo = 0 , mid = 0 , hi = n - 1 , ind ;
	 	 while(lo <= hi ){
			mid = (lo + hi)/2 ;

			if(ar[mid].first < ar[i].first + d  ){
				lo = mid + 1 ;
				ind = mid ;
			}else {
				hi = mid -1; 
			}
		}
		ll s = pre[hi+1 ] - pre[i+1 ] + ar[i].second ; 
		ans = max(s, ans) ;
		//cout << ind << " " << pre[ind] << " " << hi << endl ;
	}
	cout << ans << endl ;
    return 0;
}
