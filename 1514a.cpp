#include <bits/stdc++.h>
using namespace std ;

#define ll long long


bool isSqr(ll n ){
	if(ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
		        return true ;
	}
	else {
		        return false ;
	}
}

int main ( ){
	int t ;
	cin >> t;
	while(t-- ) {
		int n ;
		cin >> n ;
		vector<int> ar(n) ;
		int flag = 0 ;
		for(int i = 0 ; i < n ;i++ ){
			cin >> ar[i];
		}

		for(int i = 0 ; i < n ;i++ ) {
			if(!isSqr(ar[i]) ){
				flag = 1;
				break ;
			}
		}

		flag == 1 ? cout << "YES" : cout << "NO" ;
		cout << endl ;
	}
	return 0;
}
