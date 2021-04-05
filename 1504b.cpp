#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t;
	cin >> t ;
	while(t--) {
		int n ;
		string s , p;
		cin >> n >> s >> p ;

		if(s == p ) {
			cout << "YES" << endl ;
			continue ;
		}
		int sum[n+1] = {0} ;

		for(int i = 0 ; i < s.size(); i++ ) {
			if(s[i] == '1') {
				sum[i +1 ] = sum[i] + 1;
			}else  {
				sum[i + 1] = sum[i]  - 1 ;
			}
		}

		int flag = 1 ,  inv = 0 ;
		for(int i = n - 1; i >= 0; i-- ) {
			if(!inv && s[i] == p[i] || inv && s[i] != p[i]){
				continue ;
			}else if(sum[i +1 ] == 0 ) {
				inv = !inv ;
			}else {
				flag = 0 ;
				break ;
			}
		}
		flag ? cout << "YES" : cout << "NO" ;
		cout << "\n" ;
	}
	return 0;
}
