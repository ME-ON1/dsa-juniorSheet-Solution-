#include <iostream>
#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
	// your code goes here
	vector<int> yr(1000, 0); 
	
	vector<pair<int,int>> pr;
	
	int p, q, l , r ;
	cin  >> p >>q >> l >>r ;
	for(int i = 0; i < p ; i++ ){
		int a, b ;
		cin >> a >> b ;
		for(int j = a ; j <= b ; j++ ) {
			yr[j] = 1;
		}
//		yr.push_back(make_pair(a,b));
	}
	
	for(int i = 0 ; i < q ; i++ ){
		int a, b ;
		cin >> a >> b;
		pr.push_back(make_pair(a,b));
	}
	
	int count = 0 ;
	
	for(int i = l ; i <= r ; i++ ){
		int vlaid = 0 ;
		for(auto x : pr ){
			for(int j = x.first ; j <= x.second ; j++) {
				if(yr[j+ i]){
					vlaid = 1 ;
					break ;

				} 
			}
		}
		if(vlaid) count++ ;
	}
	
	cout << count << endl;
	
	return 0;
}
