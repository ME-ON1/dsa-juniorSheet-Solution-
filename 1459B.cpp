#include <bits/stdc++.h>
using namespace std ;
#define ll  long long 

int main( ){
    ll n ;
    cin >> n;
    if(n == 1 ){
        cout << 4 << endl ;
        return 0; 
    }else if(n & 1 ){
        cout << (n/2 + 1)* (n/2 + 2 )*2 << endl;
    }else if(n%2 == 0){
        cout << (n/2 + 1)*(n/2 + 1)<< endl; 
    }
    return 0 ; 
}