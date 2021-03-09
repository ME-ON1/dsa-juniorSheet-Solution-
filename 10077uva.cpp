#include <bits/stdc++.h>

#define ll long long 

using namespace std;

int main () {
	int n , m ;
	while(1){
	cin >> n >> m ;
	if(n == 1 && m == 1 ){
		break ;
	}

	double value = (double)n/m ;
	int Nf = 0 , Df = 1 , Ns = 1 , Ds = 0 ;
        int Nm = 1 , Dm = 1; 
	for(; Nm != n || Dm != m ; Nm = Nf + Ns , Dm = Df + Ds ){
		if(value < (double)Nm/Dm) {
			cout << "L" ;
			Ns = Nm ; Ds = Dm ;
		}else {
			cout << "R" ; 
			Nf = Nm ; Df = Dm ; 
		}
	}	
	
		cout << endl;
}}
