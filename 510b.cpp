#include <bits/stdc++.h> 
using namespace std ;

#define ll long long 
const int MAX = 50 ;
int vis[MAX][MAX] = {0}; 
char mat[MAX][MAX]  ;
int dirX[] = {-1, 1, 0 , 0 } ;
int dirY[] = {0 , 0 , -1 , 1} ;
int n , m ;
bool cycle = false ;

int dfs(int i , int j, char A, int cnt){
	cout << A << i << " " << j << " " << endl ;
	if(mat[i][j] != A || i < 0 || i >= n || j < 0 || j >= m)
		return 0 ;
	if(vis[i][j] && cnt > 3) 
		vis[i][j] = 1 ; // got the ans 
		cycle = true ;
		return 0 ;
	vis[i][j] = true ;
	cnt++ ;
	if((i + 1) != n || j != m) 
		dfs(i + 1, j , A, cnt++ ) ;
	if((i - 1) != n || j != m )
		dfs(i - 1 , j , A, cnt++ ) ;
	if(i != n || (j + 1) != m) 
		dfs(i , j+ 1, A, cnt++ ) ;
	if(i != n || (j -1 ) != m) 
		dfs(i , j -1 , A, cnt++ ) ;
}


int main (){
	cin >> n >> m ;
	cout << n << m ;	
	for(int i = 0;i < n ;i++ )
       	{
		for(int j = 0; j < m ; j++ )
		{
			cin >> mat[i][j]; 
		}
	}

	for(int i = 0; i< n; i++ )
	{
		memset(vis, 0 , sizeof(vis)) ;
		int cnt = 0 ;
		for(int j=  0; j < m ; j++ ) 
		{
			if(vis[i][j] == 0 ) {
				dfs(i , j, mat[i][j] , cnt); 
				if(cycle) 
				{
					cout << "YES" ;
					return 0 ;
				} 
			}
		}
	}
	cout << "NO" << endl ;
	return 0;
}
