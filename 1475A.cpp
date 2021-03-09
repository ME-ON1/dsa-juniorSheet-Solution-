#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
    ll t , n ; 
    cin >> t; 
    while(t--){
	    cin >> n;
	    if(n%2 != 0 ){
		    cout << "Yes"  ;
	    }else {
		while(n > 0 && n %2 == 0) 
		{	
			 n /= 2 ;
		}
		n == 1 ? cout << "No" : cout << "Yes" ;
	    }
	cout << endl ;
    }
    return 0;
}
