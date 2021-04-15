#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t;
	cin >> t;
	while(t--) {
		int n ,k  ;
		cin >> n >> k ;
		if(n % 3 < k) {
			cout << -1 << endl ;
			continue;
		}

		vector<int> ar(n) ;
		for(int i = 0; i< n ; i++ ) {
			ar[i] = i+ 1 ;
		}

		for(int i = n -1 ; i >= 0 ;i-- ) {
			if(k--) {
				swap(ar[i], ar[i-1]) ;
				i-- ;
			}
		}

		for(auto i : ar) {
			cout << i << " " ;
		}
		cout << endl ;
	}
    return 0;
}
