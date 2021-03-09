#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

//int find(int n ) {
	//for(int a = 1 ; a < 100 ; a++ ) {
		//for(int  b = a; b < 100 ; b++  ){
			//int powOp  = pow(a, n) + pow(a, n) ; 
			//double c = pow(powOp , 1.0/ n)	 ;
			//int c_pow = pow(c , n)	 ;
			//cout << c_pow << endl ;
			//if(powOp == c_pow) {
				//if(a < b) {
					//cout << a << " " << b << " " << c_pow << endl; 
					//return 0 ;
				//}
			//}	
	//}	
	//}
	//return -1 ;
//}

int main (){
	int n ;
	cin >> n ;
	if(n == 0) {
		cout << -1 << endl ;
		return 0 ;
	}
	if(n > 2 ) {
		cout << -1 <<  endl ;
		return 0 ;
	}
	if(n == 1) {
		cout << 1 << " " << 2 << " " << 3 << endl;
	}else if(n== 2) {
		cout << 3 << " "<< 4 << " " << 5 << endl ;
	}
    return 0;
}
