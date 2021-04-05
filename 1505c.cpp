#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	string s ;
	cin >> s ;
	for(int i = 1 ; i < s.size() -1 ; i++ ) {
		if(((int)s[i]%65 + (int)s[i-1]%65)%26 == (int)s[i+1]%65) {
			continue ;
		}else {
			cout << "NO" <<"\n" ;
			return 0;
		}
	}
	cout << "YES" << "\n" ;
    return 0;
}
