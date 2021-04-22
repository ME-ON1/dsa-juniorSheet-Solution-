#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	string s ;
	cin >> s ;
	int op = 0 , cl = 0 ;
	for(int i = 0 ; i < s.size(); i++  ){
		if(s[i] == '(') {
			op++ ;
		}else{
			cl++ ;
			if(op > 0 ) {
				cl -- ;
				op-- ;
			}
		}
	}
	cout << s.size() - abs(op + cl ) ;
    return 0;
}
