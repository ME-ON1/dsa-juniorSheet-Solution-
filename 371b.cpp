#include <bits/stdc++.h>
using namespace std ;

#define ll long long


ll pow2(ll& a){
	ll cnt = 0;
	while(a %2 == 0) {
		a = a/2 ;
		cnt++ ;
	}
	return cnt  ;
}

ll  pow3(ll &a) {

	ll cnt = 0;
	while(a %3 == 0) {
		a = a/3 ;
		cnt++ ;
	}
	return cnt  ;
}

ll pow5(ll &a) {

	ll cnt = 0;
	while(a % 5 == 0) {
		a = a/5 ;
		cnt++ ;
	}
	return cnt  ;
}

int main ( ){
	ll a , b ;
	cin >> a>> b;

	int powerOf2a = pow2(a) ;
	int powerOf3a = pow3(a) ;
	int powerOf5a = pow5(a) ;

	int powerOf2b = pow2(b) ;
	int powerOf3b = pow3(b) ;
	int powerOf5b = pow5(b) ;


	if(a == b) {
		cout << abs(powerOf2b - powerOf2a) + abs(powerOf5a - powerOf5b) +  abs(powerOf3b - powerOf3a) ;
	}else {
		cout << -1 << endl ;
	}

	return 0;
}
