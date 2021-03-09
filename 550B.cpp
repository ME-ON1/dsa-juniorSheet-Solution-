#include <bits/stdc++.h>
using namespace std ;

#define ll long long 

int main() {
	ll n , l ,r ,x ;
	cin >> n >> l >>r >> x ;
	vector<int> arr(n) ;
	for(int i = 0 ; i< n ; i++ ){
		cin >> arr[i];
	}
	int cnt = 0 ; 
	for(int i = 0; i < (1 << n) ; i++ ){
		vector<int> vrr;
		int sum = 0; 
		for(int j = 0 ; j < n ; j++ ){
			if( i  &( 1 << j)){
				vrr.push_back(arr[j]) ;
				sum += arr[j] ;
			}
		}
		if(sum >= l && sum <= r && vrr.size() >= 2) {
			sort(vrr.begin(), vrr.end());
			if(vrr[vrr.size() - 1] - vrr[0] >= x ){
				cnt++ ;
			}
		}
	}
	cout << cnt << endl ;
	return 0;
}
