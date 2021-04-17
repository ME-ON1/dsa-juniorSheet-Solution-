#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t ;
	cin >> t;
	while(t--) {
		vector<int> e , o ;
		 int n;
		 cin >> n ;

		 for(int i = 0  ; i < n ; i ++ ) {
			int a ;
			cin >> a;
			if(a & 1 ) {
				o.push_back(a);
			}else {
				e.push_back(a);
			}
		 }


		 for(auto i : e) {
			 cout << i << " " ;
		 }
		 for(auto i : o) {
			 cout << i << " " ;
		 }

		 cout << endl ;
	}
    return 0;
}
