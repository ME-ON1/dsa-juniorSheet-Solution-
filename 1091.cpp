#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n , m ;
	cin >> n >> m ;
	multiset<int> tickets ;

	for(int i = 0 ; i < n ; i++ ) {
		int a ;
		cin >> a ;

		tickets.insert(a) ;
	}

	while(m-- ) {
		int t ;
		cin >> t;
		auto itr = tickets.upper_bound(t) ;
		if(itr == tickets.begin() ){
			cout << -1 << endl ;
		}else{
			cout << *(--itr) << endl ;
			tickets.erase(itr) ;
		}
	}
    return 0;
}
