#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n ;
	cin >> n;
	vector<int> ar(n) ;
	for(int i = 0 ; i< n ; i++) {
		cin >> ar[i] ;
	}
	int restDays = 0 ;
	for(int i = 0 ; i < n -1;i++ ) {
		if(!ar[i]) restDays++ ;

		else if(ar[i] == ar[i+1] && ar[i+1 ] != 3 ) restDays++ ;

		else if(ar[i] != ar[i+1] && (ar[i] == 3 || ar[i+1] == 3)) restDays++ ;
	}
	cout << restDays ;
    return 0;
}
