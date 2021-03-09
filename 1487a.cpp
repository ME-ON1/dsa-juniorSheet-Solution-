#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
	ll t ;
	cin >> t; 
	while(t-- ) {
		ll n ;
		cin >> n ;
		ll  arr[n+1 ]  ;
		for(int i = 0 ; i < n ;i++ ) {
			cin >> arr[i] ;
		}

		sort(arr , arr + n )  ;
		ll cnt = 0 ; 
		for(int i = n - 1 ; i >= 1 ; i-- ) {
			for(int j = i ; j >= 0 ; j-- ){
				if(arr[i] > arr[j] ) {
					cnt++ ;
					break ;
				}
			}
		} 

		cout << cnt << endl  ; 

	}
    return 0;
}
