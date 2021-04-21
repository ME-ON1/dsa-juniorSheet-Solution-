#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	 int t;
	 cin >> t ;
	 while(t--) {
		 int n , k ;
		 cin >> n >> k ;
		 vector<int> ar(n);
	       	 int sum = 0 ;
		 for(int i = 0; i < n; i++ ) {
			 cin >> ar[i] ;
			 if(i < n ) {
				sum += ar[i] ;
			 }
		 }

		  int i = 0 ;
		 while(k && i < n ) {
			 if(ar[i] <= k ){
				ar[n - 1 ] += ar[i] ;
				k -= ar[i] ;
				ar[i] = 0 ;
			 }else {
				 ar[i] = ar[i] - k ;
				 ar[n - 1] +=  +  k  ;
				 k = 0 ;
			 }
			 i++ ;
			 if(i == n - 1) {
				 break ;
			 }
		 }
		 for(auto i : ar ){
			 cout << i << " " ;
		 }
		 cout << endl ;
	 }
    return 0;
}
