#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int checkPallin(string s , int k ) {
	int flag = 0 ;
	if(s.size() == 1) {
		return true ;
	}else {
		for(int i = 0 ; i < k ; i++) {
			if(s[i] != s[s.size() -1 - i]) {
				return false ;
			}
		}
	}
	return true ;
}

int main ( ){
	int t ;
	cin >> t ;
	while(t--) {
		int n, k;
		cin >> n >> k ;
		string s ;
		cin >> s ;
		if(k ==0 ) {
			cout << "YES" << endl ;
			continue ;
		}
		if(n >= 2*k + 1) {
			if(checkPallin(s, k)) {
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl ;
			}
		}else {
			cout << "NO" << endl ;
		}
	}

    return 0;
}
