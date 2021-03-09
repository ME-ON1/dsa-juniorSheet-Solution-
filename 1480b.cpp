#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
	ll t; 
	cin >> t ;
	while(t--){
		ll a, b, n;
		cin >> a >> b >> n ;
		vector<ll>  arr, vrr ;
		for(int i = 0 ; i < n ; i++ ){
			ll u ;
			cin >> u ;
			arr.push_back(u) ;
		}
		for(int i = 0 ; i < n ; i++  ){
			ll u ;
			cin >> u ;
			vrr.push_back(u) ;
		}

		int flag = 0 , i = 0 ;
		while(1){
			double heroAttack = (double)vrr[i]/a ; 
			double monstrAttack = (double)b / arr[i] ;
		cout << heroAttack << " " << monstrAttack << endl ;	
			if(heroAttack <= monstrAttack ){
				b = b - ceil(arr[i]*heroAttack) ;
				vrr[i] = vrr[i] - ceil(monstrAttack*a) ;
				if(i == n-1 && vrr[i] <= 0 ) {
					flag = 0 ;
					break ;
				}
			}else if(heroAttack > monstrAttack) { // hero ded 
				if(i == n-1 ){
					flag = 0 ;
					break ;
				}else {
					flag = 1 ;
					break ;
				}
			}

			if(vrr[i] <= 0) {
				i++ ;
			}
		}
		flag ? cout << "NO" : cout << "YES" ;
		cout << "\n" ;
	}
    return 0;
}
