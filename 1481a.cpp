#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	int t;
	cin >> t ;
	while(t--) {
		int a, b; 
		cin >> a  >> b ;
		string s ;
		cin >> s ;
		int r=  0 , l = r , u = r , d = r; 
		if(a < 0 ) l = -a ;
		if(a > 0 ) r = a ;
		if (b < 0 ) d = -b ;
		if(b > 0 ) u = b; 
		for(auto i  : s) {
			if(i == 'R' ){
				r-- ; 
			}else if(i == 'L'){
				l-- ;
			}else if(i == 'U') {
				u-- ;
			}else {
				d--;
			}
		 }
		if(a < 0 && l <= 0 ) a = 0 ;
		if(a > 0 && r <= 0 ) a = 0 ;
		if(b < 0 && d <= 0 ) b = 0 ;
		if(b > 0 && u <= 0)  b = 0 ;
		!a && !b ? cout << "YES\n " :cout << "NO\n" ;
	}
    return 0;
}
