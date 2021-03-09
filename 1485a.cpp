#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main(){
	ll t; 
	cin >> t; 
	while(t--) {
		 ll a , b ;
		 cin >> a >> b ;
		 int cnt = 0 ; 
		 if(a == b) {
			 cout << 2 << endl ;
			 break ;
		 }else {

		 	while(a != 0 ){
				if(a == b || b == 1) {
					 cnt++; 
					 b = b+1 ;
				 }else if(a > b) {
					 a = a/b ;
					 cnt++ ; 
				 }else if(a < b) {
					cnt++ ;
				a = a/b;
			 }
		 }
		 cout << cnt << endl ;
		 }
	}
    return 0;
}
