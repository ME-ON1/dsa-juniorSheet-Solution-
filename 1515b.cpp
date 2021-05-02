#include <bits/stdc++.h>
using namespace std ;

#define ll long long


bool perfect(ll n)
{

	if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
		return 1 ;
	}
	else {
		return 0 ;
	}
}

int main ( ){
	ll t;
	cin >> t ;
	while(t-- ) {
		ll n ;
		cin >> n ;
		if(n ==1 || 1 & n ){
			cout << "NO" ;
		}else {
			if(n % 4 == 0 && perfect(n/4) || n % 2 == 0 && perfect(n/2) ){
				cout << "YES" ;
			}else {
				cout << "NO" ;
			}
		}
		cout << endl ;
	}
	return 0;
}
