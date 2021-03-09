#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main(){
	int t ;
	cin >> t ;
	while(t-- ){
		int arr[10000] = {0} ;
		int n ;
		cin >> n;
		for(int i = 1; i <= n ;i++){
			int u;
			cin >> u;
			arr[u]++ ;
		}
		int mx = 0 ;
		for(int i = 1 ; i <= n ; i++ ){
			mx = max(arr[i], mx) ; 
		}
		cout << mx<< endl ;
	}
    return 0;
}
