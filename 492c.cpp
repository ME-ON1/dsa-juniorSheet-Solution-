#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	ll n , r ,avg ;
	cin >> n >> r >> avg ;
	vector<pair<ll,ll>> ar ;
	ll sum = 0;
	for(int i = 0; i < n; i++ ) {
		ll a , b ;
		cin >> a >> b ;
		ar.push_back(make_pair(b,a) );
		sum += ar[i].second ;
	}

	sort(ar.begin(), ar.end() ) ;

	ll res = 0, i = 0 ;

	while(sum < avg*n) {
		ll t = min(avg * n -sum , r - ar[i].second);
		res += ar[i].first * t ;
		sum += t ;
		i++ ;
	}
	cout << res << "\n" ;
        return 0;
}
