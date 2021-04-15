#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int calMan(pair<int , int> a , pair<int, int > b) {
	return abs(a.first - b.first ) + abs(a.second - b.second ) ;
}

double calDan(pair<int, int > a , pair<int , int > b) {
	return sqrt((pow(a.first -  b.first, 2)) +(pow(a.second - b.second, 2) )) ;
}


int main ( ){
	ll n ;
	cin >> n;
	vector<pair<ll, ll> > vr(n) ;

	map<ll , ll> row , col ;
	map<pair<ll, ll> , ll > use ;


	for(int i = 0 ; i < n; i++ ) {
		int a , b;
		cin >>a >> b ;
		row[a]++;
		col[b]++ ;
		use[{a,b}]++;

	}
	ll ans = 0;
	for(auto i : row ) {
		ans += i.second * (i.second -1 )/2 ;
	}

	for(auto i : col ) {
		ans += i.second * (i.second - 1) /2 ;
	}

	for(auto i : use) {
		ans -= i.second * (i.second - 1 ) /2 ;
	}

	cout << ans  << "\n" ;
    return 0;
}
