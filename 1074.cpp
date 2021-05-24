#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n ;
	cin >> n ;
	vector<int> ar(n) ;
	ll sum = 0 ;
	for(int i = 0 ; i < n ; i++ ) {
		cin >> ar[i] ;
		sum += ar[i] ;
	}

	sort(ar.begin(), ar.end()) ;
	ll left = 0 ;
	for(int i = 0  ; i < n ; i++ ) {
		left += abs(ar[n/2] - ar[i]) ;
	}

	cout << left  << endl ;

    return 0;
}
