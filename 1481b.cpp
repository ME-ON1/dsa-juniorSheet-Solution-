#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	int t;
       	cin >> t ;

	while(t-- ) {
		int n , k ;
		cin >> n >> k ;
		int arr[101] = {0 };
		for(int i = 1 ;i <= n ;i++ ) {
			cin >> arr[i] ;
		}
		int i = 0, pos = 0; 
		while(k--) {
			for(i = 1; i < n ;i++ ) {
				if(arr[i] < arr[i+1]){
					arr[i]++ ; 
					break ; 
				}
			}
			if(i >= n ) {
				pos = 1 ;
				break ;
			}	
		}
		pos ? cout << "-1\n" : cout << i  << endl ; 
	}
    return 0;
}
