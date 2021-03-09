#include<bits/stdc++.h>

#define ll long long 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const long MAX = 1000000000 ;
                 
using namespace std ;


int main () {
    FAST ;
    int n, m ;
    cin >> n >> m ;
    int a , b ;
    cin >> a>> b ;
    int t ;
    cin >> t ;
    ll total  = 0 ;
    while(t--){
        int r, c;
        cin >> r >> c ;
        int l =  1 << 30 ,  k = 1 << 30 ;
        

        if(r > 0){
            l = (n - a) / r ;
        }else if (r < 0 ){
            l =  (a - 1) / -r;
        }
        if (c > 0 ){
            k = ( m - b ) / c ;
        }else if ( c < 0){
            k = (b - 1) / -c;
        }
        long steps = 0 ;

            steps = min(l ,k ) ;
            a += steps*r ;
            b += steps*c ;

            total += steps ;
  
    }

    cout << total << endl ;
    return 0;
}