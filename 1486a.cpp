#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
	ll t; 
	cin >> t ;
	while(t--) {
		ll n ;
		cin >> n ;
		ll cz = 0 ,cn = 0  ;
		for(ll i = 0 ; i < n ;i++ ) {
			ll a;
			cin >> a ;
			if(a == 0 ) {
				cz ++ ; 
			}else {
				cn++; 

			}
		}

		if(cz == 0 ) {
			cout << "yes" << endl ;
		}else if(cz == cn ){
			cout << "yes" << endl ;
		}else if(cz > cn ){
			cout << "no" << endl  ;
		}
	}
    return 0;
}
