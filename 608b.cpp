#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	string s ,t ;
	cin >> s >> t; 
	ll sum = 0 ;
	if(s.size() == t.size()) {
		for(int i =0 ; i < s.size() ; i++ ) {
			sum += (s[i] - '0') ^ (t[i] - '0') ;
		}
		cout << sum << endl ;
		return 0; 
	}else {
		for(int i = 0 ; i < t.size() - s.size() - 1 ; i++ ){
			sum += find()
		}
	}
    return 0;
}
