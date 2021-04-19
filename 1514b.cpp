#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define MOD 1000000007

int main ( ){
 	ll t;
	cin >>t ;
	while(t-- ){
		ll n , k ;
		cin >> n >> k ;
	       	ll c = 1 ;
		while(k-- >= 1 ) c = (c*n)%MOD ;
		cout << c << "\n" ;
	}
    return 0;
}
