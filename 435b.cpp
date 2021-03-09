#include <bits/stdc++.h>
using namespace std ;

#define ll long long


int main ( ){
	string s;
	cin >> s ;
	int n ;
	cin >> n ;
	if(n == 0 ) {
		cout << s << "\n";
		return 0 ;
	}

	for(int i = 0 ; i < s.size() - 1 ; i++ ) {
		int pos = i ;
		for(int  j = i + 1 ; j < s.size() && j - i <= n ; j++ ) {
			if(s[j] > s[pos]) {
				pos = j ;
			}
		}

		for(int j = pos ; j > i ; j--)  {
			swap(s[j],s[j-1]);
		}
		n -= (pos - i ) ;
	}
	cout << s<< endl ;

    return 0;
}
