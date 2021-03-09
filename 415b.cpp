#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
	ll n ,a ,b ;
	cin >> n >> a >> b ;
	while(n--) {
		ll u ;
		cin >> u ;
		ll o = ( u *a  ) %b ;
		cout << o / a << " ";

	}
    return 0;
}
