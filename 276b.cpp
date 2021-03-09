#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main (){
	string s;
	cin >> s ;
	int cha[27] = {0} ;

	for(int i = 0 ; i < s.size(); i++) {
		cha[(s[i] - '0')%49]++ ;
		//cout <<  (s[i] - '0\') % 49  << endl ;
	}
	int k = 0 ;
	for(int i = 0 ; i < 26 ; i++ ) {
		if(cha[i] & 1) k++ ;
	}

	if(k == 0 || k & 1 ) {
		cout << "First" << "\n" ;
	}else {
		cout << "Second" << "\n" ;
	}
    return 0;
}
