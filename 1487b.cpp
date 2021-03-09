#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
 	ll t; 
	cin >> t ;

	while(t-- ) {
		ll n, k  ;
		cin >> n >> k ;
		ll arr[k+1] , brr[k+1] ;
		arr[0] = n ;
		for(int i = 1, j = n - 1 ; i <= k ; i++ , j--  ) {
			if(j == 0) {
				j =  n - 1;
			}

			arr[i] = j ;
		}
		brr[0] = 1 ;
		for(int i = 1, j = 2 ; i <= k ; i++, j++ ) 
		{
			brr[i] = j % n == 0 ? n : j% n ;
			if(brr[i] == arr[i]) {
				brr[i] = (brr[i] + 1 ) % n == 0 ? 1 : (brr[i] + 1 ) % n; 
				j = j + 1 ;
			}
			
		}	
		for(int i = 0 ; i <= k ; i++ ) {
			cout << brr[i] << " " ;
		}
		cout << brr[k] << endl ;
	}
    return 0;
}
