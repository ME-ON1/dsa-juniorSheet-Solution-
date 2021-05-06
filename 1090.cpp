#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n , x ;
	cin >> n >> x;
	vector<int> ar (n) ;

	for(int i = 0 ; i  < n ; i++ ){
		cin >> ar[i] ;
	}

	sort(ar.begin(), ar.end()) ;
	int cnt = 0 ;
	int i = 0 , j = n -1 ;
	while( i <=j ) {
		if(ar[i] + ar[j] <= x) {
			i++ ;
			j-- ;
			cnt++;
		}else {
			j--;
			cnt ++ ;
		}
	}
	cout << cnt  << endl ;
    return 0;
}
