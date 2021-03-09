#include<bits/stdc++.h>

using namespace std ; 
int parent[500] ;

vector<pair<int,int>> arr ;
vector<pair<double, pair<int,int>>> w ;
int _size ;
void initParent (int p) {
	for(int i = 0 ; i <= p;i++ ) {
		parent[i] = i; 
	}
	_size = p ;
}

int find(int x) {
	if(parent[x] == x ) return x ;
	else 
	{
		parent[x] = find(parent[x]) ;
	}
	return parent[x] ; 
}


void unionSet(int a, int b) {
	if(find(a) != find(b)) {
		parent[a] = find(b) ;
		_size-- ;
	}

}

int getSize() { 
	return _size ; 
}
int main() {
	int t ;
	cin >> t; 
	while(t--) {
		w.clear() ;
		arr.clear() ;
		int s, p ;
		cin >> s >> p ;
		initParent(p); 
		for(int i = 0 ; i< p ; i++ ) {
			int a , b; 
			cin >> a >>  b ;
			arr.push_back(make_pair(a,b)) ;
		}

		for(int  i= 0; i < p ;i++ ) {
			for(int  j= i+1 ; j < p ; j++ ){
				double dist = std::hypot((double)arr[i].first - arr[j].first, (double)arr[i].second - arr[j].second) ;
				w.push_back(make_pair(dist , make_pair(i, j))) ;
			}
		}
		double D=  0.0 ; 
		for(int i = 0 ; getSize() > s ; i++ ) {
			int x = find(w[i].second.first ); 
			int y = find(w[i].second.second);

			if(x != y) {

				D = std::max(D, w[i].first) ;
				unionSet(w[i].second.first, w[i].second.second) ;
			}
		}
		
		printf("%.2lf\n", D) ;

 	}
	return 0; 
}
