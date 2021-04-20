#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n, m , k ;
	cin >> n >> m >> k;
	vector<int> ar(n +1 ) ;

	for(int i  = 1 ; i <= n ;i++ ) {
		cin >> ar[i];
	}
	int leftI = - 1, rightL = - 1 ;
	for(int i = m - 1; i >= 0; i-- ) {
		if(ar[i] != 0 && k - ar[i] >= 0 ){
			leftI = i ;
			break ;
		}
	}

	for(int i = m + 1  ; i <= n ; i++ ){
		if(ar[i] != 0 && k - ar[i ] >= 0 ){
			rightL = i  ;
			break ;
		}
	}
	if(leftI > 0 && rightL > 0 ) {
		int u = min(abs(m - leftI ), abs(m -rightL )) ;
		cout << u *10 ;
	}else {
		if(leftI > 0 ) {
			cout << abs(leftI - m) * 10 << endl ;
		}else if(rightL > 0 ) {
			cout << abs(rightL - m ) * 10 << endl ;
		}
	}

    return 0;
}
