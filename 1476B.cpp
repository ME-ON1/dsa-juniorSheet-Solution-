#include <bits/stdc++.h> 
using namespace std ; 
const int MAX = 100000 ;
#define ll long long 

int main (){
		ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t ;
	cin >> t;
	while(t--){
		
	ll  n , k ;
	cin >> n >> k ;
        ll arr[105] , prr[105] ;
	for(int i = 0 ; i < n ; i++ ){
		cin >> arr[i] ;
		prr[i] = arr[i] ;
	}
	prr[0] = arr[0]; 
	for(ll i = 1; i < n ; i++ ){
		prr[i] = arr[i] + prr[i-1] ;
	}
	ll inc = 0 ;
	for(ll i = 1; i < n ; i++ ){
		ll tmp = k* (prr[i-1] + inc) ;
		if(100*arr[i] < tmp ){
			continue; // conditon okay here 
		}	
		else {
			ll x = (100*arr[i] - (prr[i- 1] + inc)*k +k -1 )/k ;
			inc += x ;
		}
		}

		cout << inc << endl ;
	}

    return 0;
}
