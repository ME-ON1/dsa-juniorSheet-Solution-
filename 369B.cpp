#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	int n ,k, l ,r , sa ,sk ;
	cin >>  n>> k >> l >> r >> sa >> sk ;
	int rem = sk % k ;
	for(int i = 0; i < k; i++) {
		int u = sk / k + (rem > 0) ;
			
		cout << u << " " ;  
		rem -= 1  ;
	}
	if(k < n ) {
		
	int rem1 = (sa - sk )% (n - k );
	for(int i = k ; i < n ; i++  ){
		int u = (sa - sk) /  (n-k) + (rem1 > 0) ;
		cout << u << " "; 
		rem1 -= 1 ;
	}
	}


	
    return 0;
}
