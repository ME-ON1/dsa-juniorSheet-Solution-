#include <bits/stdc++.h>

using namespace std ;
#define ll long long


int findVal(int myVal , vector<int> &ar , int k) {

	int l = 0 , r = ar.size() - 1 ;
	while(l <= r){
		int mid = l + (r -l )/2 ;
		if(-k <= myVal - ar[mid] &&  myVal - ar[mid] <= k  ){
			return 1 ;
		}else if(myVal - ar[mid] > k ) {
			l = mid + 1;
		}else if(myVal - ar[mid] < -k ){
			r = mid - 1  ;
		}
	}

	return 0 ;
	//for(auto i : ar ) {
		//if( myVal - i >= -k && myVal - i <= k ){
			//return 1 ;
		//}
	//}

}

int main () {
	ll n , m , k ;
	cin >> n >> m >> k ;
	vector<ll> ar(n) , pr(m) ;


	for(int i =  0 ; i  < n  ; i++ ) {
		cin >> ar[i] ;
	}

	for(int  i = 0; i  < m ;i++ ) {
		cin >> pr[i] ;
	}


	sort(pr.begin(), pr.end()) ;
	sort(ar.begin(), ar.end()) ;

	int sum = 0 ;
	//for(int i = 0 ; i  < n ; i++  ){
		//int u =  findVal(ar[i], pr ,  k) ;
		//sum += u ;
		//
	//}V
	//

	int i = 0 , j = 0 ;
	while(i < n && j < m ) {
		if(abs( ar[i] - pr[j] ) <= k){
			i++ ;
			j++;
			sum++ ;
		}else {
			if(ar[i] - pr[j] > k ) {
				j++ ;
			}else {
				i++ ;
			}
		}
	}
	cout << sum << endl ;
	return 0 ;
}
