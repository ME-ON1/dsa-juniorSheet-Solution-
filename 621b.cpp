#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	ll n;
	cin >> n ;
	vector<pair<ll,ll>> arr(n) ;

	for(int i = 0 ; i < n ;i++ ) {
		int a , b; 
		cin >> a >> b ;
		arr[i] = make_pair(a,b) ;

	}
	ll cnt = 0 ;
	for(int i = 0 ; i < n - 1 ; i++ ) {
		for(int j = i + 1 ; j < n  ; j ++  ){
			if(arr[j].first - arr[i].first == arr[j].second - arr[i].second ){
				cnt++ ; 
			}
		}
	}

	cout << cnt << endl ;
    return 0;
}
