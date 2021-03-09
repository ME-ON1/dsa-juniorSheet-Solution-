#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 
int n , m ; 
const int MAX = 101 ;
int arr[MAX][MAX] , brr[MAX][MAX];

void init(int a, int b) {
	for(int i = 0;  i < m ; i++ ){
		arr[a][i] = 0 ;
	}

	for(int i = 0; i < n ; i++ ) {
		arr[i][b] = 0 ;
	}
}

int main ( ){
	cin >> n >> m ;
	for(int i = 0 ; i < n ; i++ ) {
		for(int j = 0 ; j < m ; j++ ) {
			arr[i][j] = 1 ;
		}
	}

	for(int i = 0; i < n ; i++) {
		for(int j = 0 ; j < m ; j++ ) {
			cin >> brr[i][j]; 
			if(brr[i][j] == 0 ) {
				init(i, j); 
			}	
		}
	}	
						
	for(int i = 0 ; i < n ; i++ ) {
		for(int j = 0; j < m ; j++) {
			if(brr[i][j]){
				int f = 0 ; 
				for(int k = 0 ;k < m ; k++ ){
					f |= arr[k][j] ;
				}
				for(int k = 0 ;k < n; k++ ) {
					f |= arr[i][k]; 
				}

				if(f) {
					continue; 
				}else{
					cout << "NO" ;
					return 0 ;
				}
			}	
		}
		
	}

		cout << "YES" << endl ;
		for(int i = 0 ; i < n ; i++ ) {
			for(int j = 0 ; j < m ;j++ ) {
				cout << arr[i][j] << " "; 
			}
			cout << endl ;
		}


    return 0;
}
