#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 
vector<int> arr ;



int main(){
		int n ; cin >> n ;
		ll lo = 1 , hi = n; 
		while(lo < hi ){
			ll mid = (lo + hi )/2  ;
			ll a, b ;
			cout << "? " << mid << "\n";cout.flush() ;
			cin >> a ;
			cout << "? " << mid + 1<< "\n"  ; cout.flush() ;
			cin >> b ;
			if(a < b) {
				hi = mid ; 	
			}else {
				lo = mid + 1 ;
			}
		}
		cout << "! " << lo << endl ;
		cout.flush() ;
    return 0;
}
