#include <bits/stdc++.h>
using namespace std ;
#define ll long long    

int gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

ll G ;
int main() {
    ll n , m ;
    cin >> n >> m ;
    ll a[n+1] = {0} ;
    for(int i = 1 ; i <= n ; i++ ){
        cin >>a[i] ;
        if(i-1){
        G = __gcd(G,abs(a[i] -a[i-1] ));

        }
    }
    for(int i = 1 ;i <= m; i++ ){
        ll b ;
        cin >> b;

        cout << __gcd(G , b+ a[1]) << " ";
    }
    return 0; 
}