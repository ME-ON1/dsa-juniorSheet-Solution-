#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	ll t ;
	cin >> t ;
	while(t--){	
		ll n ;
		cin >> n;
		ll ct = n % 2020 ;
		ll co = (n - ct ) / 2020 - ct ;
		(co >= 0 && 2020*co + 2021 * ct == n ) ? cout << "YES": cout << "No"; 
		cout << "\n" ;
	}
    return 0;

}
