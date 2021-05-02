#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	ll t;
	cin >>t;
	while(t--) {
		int n , k ;
		cin >> n  >> k ;
		vector<int> ar ;
		int sum = 0 ;
		int p = 0 ;

		for(int i = 0 ; i < n ; i++ ) {
			int a ;
			cin >> a ;
			if(sum + a == k) {
				if(p != 0) {
					ar.push_back(p );
					sum += p ;
				}
				p = a;
			}else {
				ar.push_back(a) ;
				sum += a;

			}
		}
		if(sum + p == k) {
			cout << "NO" ;
		}else {
			cout << "YES" ;
			cout << endl ;
			for(auto i : ar ) {
				cout << i << " " ;
			}
			if(p != 0 ) cout << p ;
		}
		cout << endl ;


	}
	return 0;
}
