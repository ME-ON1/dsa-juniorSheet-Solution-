#include <bits/stdc++.h>
using namespace std ;
#define ll long long

int main ( ){
    ll n ;
    cin >> n ;
    ll ans = 1 , oc = 0 , zc =  0;

    for(ll i = 0; i < n; i++ ){
        ll a ;
        cin >> a ;
        if(a == 1){
            if(oc != 0 ){ 
            ans *= zc + 1 ;
            }
            zc = 0 ;
            oc++ ;
        }
        else {
            zc++ ;
        }
    }

    if(oc == 0 ){
        cout << 0 << endl ;
    }else {
        cout << ans << endl ;
    }

}