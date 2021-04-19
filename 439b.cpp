#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	 ll n , x;
	 cin >> n >> x ;

	 vector<int> ar(n) ;
	 for(int i = 0 ; i < n ; i++ ) {
		 cin >>ar[i] ;
	 }

	 sort(ar.begin(), ar.end()) ;

	 ll mn = 0 ;
	 for(int i = 0; i < n ; i++  ){
		 mn += ar[i]*x ;
		 x-- ;
		 if(x <= 0){
			 x = 1 ;
		 }
	 }
	 cout << mn << endl ;
    return 0;
}
