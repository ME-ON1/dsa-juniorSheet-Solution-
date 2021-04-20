#include<bits/stdc++.h>

using namespace std ;
#define ll long long

int main() {
	ll n , m , k;
	cin >> n >> m >> k ;
	vector<pair<ll, ll>> p ;
	unordered_map<ll, ll> mp ;

	for(ll i = 0 ;  i < m ; i++ ) {
		ll l;
		cin >> l ;
		mp[l] = 1;
	}
	ll init = 1 ;
	for(ll i = 0 ; i < k ; i++ ) {
		ll a , b;
		scanf("%lld %lld", &a , &b);
		if(init == a && !mp[a]){
			init = b ;
		}else if(init == b && !mp[b]){
			init = a ;
		}
	}
	cout << init << endl ;
	return 0 ;
}
