#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n;
	cin >> n;

	queue<int> ar, br ;
	int a ;
	cin >> a ;

	while(a-- ){
		int u ;
		cin >> u  ;
		ar.push(u);
	}
	int b ;
	cin >> b;
	while(b-- ){
		int u;
		cin >> u;
		br.push(u);
	}

	int cnt = 0 ;

	while(!ar.empty() && !br.empty()){

		int q = ar.front() ;
		int p = br.front()  ;
			ar.pop() ;
			br.pop() ;
		if(q > p) {
			ar.push(p) ;
			ar.push(q) ;
			cnt ++ ;
		}else {
			br.push(q) ;
			br.push(p) ;
			cnt++ ;
		}

		if(cnt > 107) {
			cout << -1 ;
			return 0  ;
		}
	}

	cout << cnt <<" ";
	ar.empty() ? cout << 2 : cout << 1 ;
	return 0;
}
