#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t;
	cin>> t;
	while(t-- ) {
		int n ;
		cin >> n ;
		string s[n] ;
		int x  = -1 , y= -1 , p = -1 , q = -1 ;

		for(int i = 0 ; i < n ; i++ ) {
			cin >> s[i] ;
		}
		for(int i = 0; i < n ; i++ ) {
			for(int j = 0 ; j < n; j++ ) {
				if(s[i][j] == '*') {
					if(x == -1) {
						x = i , y = j ;
					}else {
						p = i , q = j ;
					}
				}
			}
		}


		if(x == p) {
			s[(x+1)%n][y] = '*' ;
			s[(x+1)%n][q] = '*' ;
		}else if(y == q) {
			s[x][(q+1)%n] = '*' ;
			s[p][(q+1)%n] = '*' ;
		}else {
			s[x][q] = '*' ;
			s[p][y] = '*' ;
		}


		for(int i = 0 ; i < n ; i++ ) {
			for(int j =0 ; j < n; j++ ) {
				cout << s[i][j] ;
			}
			cout << endl ;
		}

		cout <<endl;
	}
	return 0;
}
