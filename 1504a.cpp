#include <bits/stdc++.h>
using namespace std ;

#define ll long long

bool isPallindro(string s) {

	int i = 0 ;
	int l = s.size() -1 ;
	while(i < l ) {
		if(s[i] == s[l] ) {
			i++;
			l-- ;
			continue ;
		}else {
			return false ;
		}
	}
	return true ;
}

int main ( ){
	int t;
	cin >> t;
	while(t--) {
		string s ;
		cin >> s ;
		int flag = 0 ;
		for(int i = 0 ; i < (s.size()+ 1 )/2 ;i++) {
			if(s[i] != 'a') {
				cout << "YES" << "\n" ;
				s.insert(s.size() - i , "a" ) ;
				flag = 1 ;
				break ;
			}else if(s[s.size() - i - 1] != 'a'){
				cout << "YES" << "\n" ;
				s.insert(i , "a" ) ;
				flag = 1 ;
				break ;
			}
		}
		flag ? 	cout << s << "\n" : cout << "NO" <<"\n" ;
	}
    return 0;
}
