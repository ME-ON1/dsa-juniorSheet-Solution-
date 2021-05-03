#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	string s ;
	cin >> s;
	int count = 1, mxCount = 1 ;
	for(int i = 0 ; i < s.size() - 1 ; i++ ) {
		//cout << count << " " << s[i] << " " << mxCount << endl ;
		if(s[i] == s[i+1] ) {
			count++ ;
			mxCount = max(mxCount , count ) ;
		}else {
			count = 1 ;
		}

	}

	cout << mxCount << endl ;
    return 0;
}
