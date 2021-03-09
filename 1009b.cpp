#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	string s ;
	ll no = 0 ; 

	cin >> s ;
	string t; 

	for(auto i : s) { 
		if(i == '1') no++ ;
		if(i != '1') {
			t += i ;
		}
	}	
	int i = -1 ;
	while(t[i + 1] == '0' && i + 1 < s.size() ) {
		cout << i << endl ;
		i++;
	} 

	t.insert(i +1  , string(no, '1'));
	cout << t << "\n" ;
    return 0;
}
