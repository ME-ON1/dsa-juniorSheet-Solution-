#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	ll n;
	cin >> n ;
	ll sum = 0 ;
	ll exp_sum = (n*(n+1))/2 ;
	n-- ;
	while(n--) {
		ll a;
		cin >> a ;
		sum += a ;
	}

	cout << exp_sum - sum ;
    return 0;
}
