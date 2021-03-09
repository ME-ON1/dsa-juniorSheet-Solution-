#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

class Graph {
	int n ;
	int *rank , *parent ;
	vector<pair<int, pair<int,int>>> adj , T ;
	public :
	Graph(int n) {
			this->n = n ;
			parent = new int[n] ;
			for(int i = 0; i < n ;i ++ ){
				parent[i] = i ;
			}
	}
	
	void AddWeightedEdge(int a, int b ,int c){
		adj.push_back(make_pair(a,make_pair(b,c))) ;
	} 
	
	bool operator() (pair<int,pair<int,int>> l1 , pair<int,pair<int,int>> l2) {
		if (l2.second.second  >= l1.second.second ){
			return true; 
		}else {
			return false ;
		}
	}

	void sortd() {
		sort(adj.begin(), adj.end(),*this ) ;
		for(int i = 0 ; i < this->n ; i++  ){
			cout << adj[i].first <<  " " << adj[i].second.first << " " << adj[i].second.second<<   endl ;	
		}
	}
	
	int find(int a) {
		if(parent[a] == a){
			return a ;
		}else {
			parent[a] = find(parent[a]) ;
		}
		
		return parent[a] ;
	}
	
	void uniondf (int xel ,int  yel ) {
		parent[xel ] = parent[yel ];
	}

	void kruskal() {
		sortd() ;
		for(int i= 0 ; i < this->n ; i++ ){
			int xel = find(adj[i].first) ;
			int yel = find(adj[i].second.first) ;
			if(xel != yel ){
				uniondf(xel,yel);
				T.push_back(adj[i]);
			}			
		}
	
	}
	void print() {
		for(int i = 0 ; i < this->n; i++ ){
			cout << T[i].first << " " << T[i].second.first << " " << T[i].second.first << endl ;
		}
	}
	
};

int main() {
	int e = 6 ;
	Graph g(e) ;
	 g.AddWeightedEdge(0, 1, 4);
  g.AddWeightedEdge(0, 2, 4);
  g.AddWeightedEdge(1, 2, 2);
  g.AddWeightedEdge(1, 0, 4);
  g.AddWeightedEdge(2, 0, 4);
  g.AddWeightedEdge(2, 1, 2);
  g.AddWeightedEdge(2, 3, 3);
  g.AddWeightedEdge(2, 5, 2);
  g.AddWeightedEdge(2, 4, 4);
  g.AddWeightedEdge(3, 2, 3);
  g.AddWeightedEdge(3, 4, 3);
  g.AddWeightedEdge(4, 2, 4);
  g.AddWeightedEdge(4, 3, 3);
  g.AddWeightedEdge(5, 2, 2);
  g.AddWeightedEdge(5, 4, 3);
	for(int i = 0 ; i < e; i ++ ){
		int a, b, c; 
		cin >> a>> b >>c ;
	}
	g.kruskal() ;
    	return 0;
}
