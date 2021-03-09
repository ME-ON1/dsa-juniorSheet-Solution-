#include <bits/stdc++.h> 
using namespace std ;
#define ll long long 
int main(){ 
    int n , m ; 
    cin >> n >> m ;
    int d[n+ 1] = { 0} ;
        for(int j = 0 ; j < m ; j++ ){
            int a , b , c ;
            cin >> a >> b >>c ;
            d[a] -= c , d[b] += c ;
        }
    ll ans = 0 ;
    for(int i = 1 ; i <= n ; i++ ){
        if(d[i] > 0 ){
            ans += d[i]; 
        }
    }
    cout << ans << endl ;
    return 0 ;
}