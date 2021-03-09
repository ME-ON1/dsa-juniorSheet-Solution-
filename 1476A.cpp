#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main(){
	ll t ;
	cin >> t ;
	while(t--){
		ll n , k;
		cin >> n >> k ;
		if(n==k || n % k == 0) {
			cout << 1 << endl ;
		}else if(n < k){
			double p = (1.0*k) / n; 
			int l = ceil(p) ;
			cout << l << endl  ;

		} else {
			cout << 2 << endl ;
		}
	}
    return 0;
}
