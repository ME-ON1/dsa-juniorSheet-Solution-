#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

 int main() {
	ll n, k =1 , l = 1  ;
	cin >> n ;
	ll mod = 1e9 + 7;
 	for(int i = 0; i < n* 3 ; i++) {
		k = (3 *k ) % mod ;
	} 

	for(int i = 0; i < n; i++ ){
		l = (7 * l) % mod ;
	}
	cout << k << " " << l  << endl;
}
