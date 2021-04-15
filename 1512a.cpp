#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int t ;
	cin >> t ;
	while(t-- ) {
		int a ;
		cin>> a ;

		vector<int> arr(a) ;

		for(int i =0 ;  i < a ; i++ ) {
			cin >> arr[i];
		}

		vector<int> brr(a) ;
		brr = arr ;

		sort(brr.begin(), brr.end()) ;
		int dou = 0 ;
		if(brr[0] == brr[1]) {
			dou = brr[a - 1] ;
		}else {
			dou = brr[0] ;
		}
		int ind ;
		for(int i = 0; i < a ; i++ ) {
			if(arr[i] == dou ){
				ind = i + 1 ;
			}
		}

		cout << ind << endl ;

	}
	return 0;
}
