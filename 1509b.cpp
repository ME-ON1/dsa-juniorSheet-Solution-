#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t ;
	cin >> t;
	while(t-- ) {
		int  t;
		cin >> t ;
		string s;
		cin >> s ;
		map<char, int >  mp ;
		for(auto i : s) {
			mp[i] += 1 ;
		}
                 //cout << mp['M'] << " " << mp['T'] << endl ;
		if(2*mp['M'] != mp['T']) {
			cout << "NO" << endl;
		}else {
			int p = 0 , q = 0 , flag = 1 ;
			for(int i = 0; i < s.size(); i++ ) {
				if(s[i] == 'T') {
					p++;
				}else {
					q++ ;
					if(p < q) {
						flag = 0 ;
						break;
					}
				}
			}
			if(flag == 0 ) {
				cout << "NO" << endl ;
				continue ;
			}
			p = 0 , q =0 ;
			for(int i = s.size() -1 ; i >= 0 ; i-- ){
				if(s[i] == 'T' ) {
					p++ ;
				}else {
					q++ ;
					if(q > p) {
						flag = 0 ;
						break ;
					}
				}
			}

			if(flag == 0 ) {
				cout << "NO" << endl ;
			}else {
				cout << "YES" << endl ;
			}
 		}

	}
    return 0;
}
