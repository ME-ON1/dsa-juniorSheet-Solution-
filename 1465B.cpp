#include <bits/stdc++.h>
using namespace std ;
#define ll long long 

int check(ll a ){
    ll o = a ;
    while(o != 0){
        ll rem = o % 10 ;
        if(rem == 0 ){
            o = o / 10 ;
            continue; 
        }
        if(a % rem != 0){
            return 0;
        }
        o = o / 10 ;
    }
    return 1;
}

int main() { 
    ll t;
    cin>> t; 
    while(t--){
        ll a ;
        cin >> a ;
            while(1){
                if(check(a) != 1){
                    a++ ;
                    continue ; 
                }else {
                    cout << a << endl ;
                    break;
                }
            }
    }
}