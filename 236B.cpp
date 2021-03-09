#include <bits/stdc++.h>
using namespace std ;

#define ll long long 


void solve(ll n){
    for(int i = 2 ; i*i <= n ; i++) {
        // if(n%i == 0 ){
            while(n%i != 0){
                
            }
        // }
    }
}

int main() {
    ll a ,b ,c ;
    cin >> a >> b>> c;
    ll N = a*b*c;
    ll h = 1 << 30 ;
    ll ar[N+1] = {0} ;
    ll ans = 0; 

    // for(ll i = 1 ; i <= N ; i++ ){
    //     for(ll j = i ; j <= N ; j += i ){
    //         ar[j]++;
    //     }
    // }

    for(int i = 1; i <= a ; i++ ){
        for(int j = 1 ; j <= b ; j++ ){
            for(int k = 1 ; k  <= c ; k++) {
                // ans += ar
                solve(i*j*k);
            }
        }
    }
    cout<< ans % h ; 
}