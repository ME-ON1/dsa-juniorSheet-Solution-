#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int findMin(vector<int> & ar , int i ) {
	auto pos = std::distance(ar.begin(), std::min_element(ar.begin() + i, ar.end()));
	return pos ;
}

void reverseRay(vector<int> & ar , int l, int r) {
	int d = (r - l +1 ) / 2 ;

	for(int i = l ; i < d ; i++ ) {
		swap(ar[l+ i], ar[r- i]) ;
	}

	return  ;
}

int main ( ){
	int t ;
	cin >> t ;
	int CaseNo = 0 ;
	while(t--) {
		int n ;
		cin >> n;
		vector<int> ar(n) ;
		for(int i = 0 ; i < n ; i++) {
			cin >> ar[i];
		}
		int numOP = 0 ;
		for(int i = 0 ;i < n ; i++ ) {
			int j = findMin(ar , i) ;
			if(i == j && j == n-1) {
				numOP += 0 ;
			}else if(j ==i ){
				numOP += 1 ;
			}else{

				reverse(ar.begin() + i , ar.begin() + j +1) ;
				numOP += j - i + 1;
			}
		}

		CaseNo++ ;
		cout << "Case #" << CaseNo << ": " << numOP << "\n" ;
	}
	return 0;
}
