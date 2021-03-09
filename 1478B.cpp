#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

bool check(int n, int d ){
	while(n != 0 ){
		int rem = n%10 ;
		if(rem == d) {
			return 1 ;
		}
		n = n / 10 ;	 
	}
	return 0 ; 
}

int main (){
	int t; 
	cin >> t ;
	while(t--){
		ll n , d ;
		cin >> n  >>d ;
		while(n--){
			int f , flag = 0 ; 
			cin >> f ;
			
		while( f  >= 0  ){
			if(check(f, d) == 1 ){
				cout << "YES" << endl ;
				flag = 1 ;
				break ;
			}else {
				f -= d ;
			}
		}
		if(flag == 0) {
			cout << "NO" << endl;
		}
		}
	}
    return 0;
}
