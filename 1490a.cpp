#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
	int t;
	cin >> t;
	while(t--) {
		int n ;
		cin >> n ;
		int a ;
		cin >> a;
		n-- ;
		while(n-- ) {
			int j ;
			cin >> j ;
			int l = min(a, j) ;
			int k = max(a, j) ;
			if(k <= 2*l) {
				a = j ;
				continue ;
			}else {
				cout << ":wq
					"
			}
		}
	}
    return 0;
}
