#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	ll t ;
	cin >> t ;
	while(t-- ){
		ll a ;
		cin >> a;
		if(a % 2050 != 0 ){
			cout << -1 << endl ;
		}else {
			ll u = a / 2050 ;
			ll sum = 0;
			while(u !=0 ){
				sum += u%10 ;
				u /= 10 ;
			}

			cout << sum << endl ;
		}
	}
    return 0;
}
