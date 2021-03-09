#include <bits/stdc++.h>
#define ll long long 
using namespace std ; 

int main() {
    ll t ;
    cin >> t ;
    while(t--){
        ll a , b,c ;
    cin >> a >> b >> c ;
    for(int i = 1 ; i < 100 ;i++  ){
        if(i%7 == 0) {
            a = a < 0 ? 0 : a- 1 ;
            b = b  < 0 ?  0 : b - 1 ;
            c = c < 0 ? 0 : c - 1 ; 
        }

        a = a < 0 ? 0 : a- 1 ;
            b = b  < 0 ?  0 : b - 1 ;
            c = c < 0 ? 0 : c - 1 ;
        if(a == 0 && b == 0 && c == 0){
            cout << "YES"<< endl ;
            break ;
        }
    }
        cout << "NO"<< endl;
    
    }
    return 0 ; 

}