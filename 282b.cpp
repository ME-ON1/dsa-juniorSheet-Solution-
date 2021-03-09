#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	int n ;
	cin >> n ;
	vector<pair<int,int>> vp(n) ;
	for(int i = 0 ; i < n ; i++ ) {
		int a , b ; 
		cin >> a >> b ;
		vp[i] = make_pair(a,b) ;
	}
	
	int ta = 0 , tb = 0 ; 
	string s = "" ;
	for(int i = 0 ; i < n ; i++ ){
		if(abs(vp[i].first + ta - tb) <= 500 ) {
			ta += vp[i].first ; 
			s += "A" ;
		}else if(abs(vp[i].second + tb - ta) <= 500 ){
			tb += vp[i].second ;
			s += "G" ;
		}else {
			cout << "-1" << "\n" ;
			return 0 ;
		}
	}

	cout << s << "\n" ; 

	return 0 ;

}
