#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll t;
	cin >> t ;
	while(t--) {
		ll n , m ;
		cin >> n >> m ;
		if(n == 1 ){
			cout << "1" << "\n" ;
			continue  ;
		}
		vector<ll> mp(m, 0) ;
		for(int i = 0 ; i < n ; i++ ) {
			ll  a ;
			cin >> a ;
			a = a% m ;
			mp[a]++ ;
		}

		ll diff_gp = 0 ;
		if(mp[0]) {
			diff_gp++ ;
		}
		for(int i = 1; i< m ; i++  ) {
			if(mp[i]) {
				if(abs(mp[i] - mp[m - i]) <= 1) {
					diff_gp++;
				}else {
					diff_gp += abs(mp[i] - mp[m - i]) ;
				}
				mp[m-i] = 0 ;
			}
		}
		cout << diff_gp << "\n" ;
	}
	return 0;
}
