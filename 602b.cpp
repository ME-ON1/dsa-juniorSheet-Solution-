#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 
const int MAX = 100010 ;

int main (){
	ll n; 
	cin>> n;
	int arr[MAX] = {0}  ; 
	int mx = 0 , v;
	for(int i = 0; i < n ; i++ ) {
		cin >> v;
		arr[v]++ ;
		mx = max(mx, v) ;
	}
	int mx1 = 0; 
	for(int i= 1 ; i < mx; i++ ) {
		if(arr[i] && arr[i+1]){
			mx1 = max(mx1, arr[i] + arr[i+1]) ; 
		}
	}
	cout << mx1 << endl ;

    return 0;
}
