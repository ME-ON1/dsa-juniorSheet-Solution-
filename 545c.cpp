#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	 int  n;
	 cin >> n;
	 vector<pair<int, int>> ar(n) ;

	 for(int i = 0 ;i < n; i++ ) {
		 int a , b ;
		 cin >> a >> b ;
		 ar[i] = {a , b} ;
	 }

	int ans = 2 ;
	if(n == 1 ) {
		cout << 1 << endl ;
		return 0;
	}else {
		for(int i = 1 ; i < n - 1 ; i++  ){
			if(ar[i].second < ar[i - 1].first - ar[i].first ){
				ans++ ;
			}else if(ar[i].second < ar[i+1].first - ar[i].first ){
				ar[i].first = ar[i].second + ar[i].first ;
				ans++ ;
			}
		}

		cout << ans  << endl ;
	}
    return 0;
}
