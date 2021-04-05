#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t;
	cin>> t ;
	for(int q = 1 ; q <= t ; q++ ) {
		int X, Y ;
		cin >> X >> Y  ;
		string s;
		cin >> s;
		int ans = 0;
		int cntQ = 0 ;
		int n = s.size() ;

		for(int i = 0; i < s.size() ; i++ ) {
			if(s[i] == '?' ) {
				cntQ++ ;
			}
		}
		int pos = 0 ;
		if(cntQ == n - 1 || cntQ == n ) {
			ans = 0 ;
		}else {
			for(int i = 0;  i < n -1 ; i++ ) {
				if(s[i] == '?' ) {
					pos = i ;
					break ;
				}
			}
			if(pos == 0 ) {
				pos++ ;
			}

			for(int i = pos ; i < n -1  ; i++ ) {
				if(s[i] == '?' ) {
					if(s[i - 1] != s[i+1] && s[i+1] != '?') {
						if(s[i- 1 ] == 'J') {
							ans += Y;
						}else {
							ans += X ;
						}
					}else if(s[i- 1] != s[i +1 ] && s[i+1] == '?') {
						int j = i + 2  ;
						while(s[j] == '?' && j < n ) {
							j++ ;
						}
						if(j == n ) {
							break ;
						}
						if(s[i-1] != s[j]) {
							if(s[i-1] == 'J') {
								ans += Y ;
							}else {
								ans += X ;
							}
						}
						i = j ;
					}
				}
			}
			for(int i = 0 ;  i < n -1  ; i++ ) {
				if(s[i] == 'J' && s[i+1] == 'C') {
					ans += Y ;
				}else if(s[i] == 'C' && s[i + 1] == 'J'){
					ans += X ;
				}
			}
		}
			cout << "Case #" << q << ": " << ans << endl ;
	}
	return 0;
}
