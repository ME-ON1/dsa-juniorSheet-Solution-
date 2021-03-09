#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main() {
	int n ;
	cin >> n; 
	int len = 0 ;
	string s , h = "0" ;
	while(n--) {
		cin >> s ;
		if(s == "0") {
			cout << 0 << endl;
			return 0 ;
		}
		int o =0  ,z = 0 , e = 0 ;
		for(auto i : s) {
			if(i == '1') {
				o++ ;
			}else if(i == '0') {
				z++ ;
			}else {
				e++ ;
			}
		}

		if(o <= 1 && e == 0){
			len += z ;
		}else { // is not a beautifil number 
			h = s;
		}
	}
	if(h != "0") {
		cout << h ; 
	}else {
		cout << 1 ; 
	}

	while(len--) {
		cout << 0 ;
	}

	return 0 ; 
}
