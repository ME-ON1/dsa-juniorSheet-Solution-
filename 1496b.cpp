#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define MAX 10000000
#define MIN 10000000

int main ( ){
	int t ;
	cin >> t ;
	while(t--) {
		int n , k ;
		cin >> n >> k ;
		cout << n << " " << k << endl ;
		unordered_map<int,int> mp ;
		int uni = 0 , mx = -1 ;
		for(int i = 0; i < n ; i++ ) {
			int q;
			cin >> q ;

			mx = max(mx , q) ;
			mp[q]++ ;
			if(mp[q] == 1 ) {
				uni++ ;
			}
		}
		int me = 0 ;
		for(int i= 0 ; i < mx + 1; i++ ){
			if(!mp[i]) {
				me =  i ;
				break ;
			}
		}

		if(me < mx && k != 0  ) {
			int flo = (me + mx )/2 +1 ;
			mp[flo]++ ;
			if(mp[flo] == 1 ){
				uni++ ;
			}
		}else if(mx < me && k != 0 ) {
			uni += k ;
		}

		cout << uni << endl ;
	}
    return 0;
}
