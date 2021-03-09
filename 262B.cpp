#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n , k ; 
    cin >> n >> k ;
    vector<int> a(n); 
    for(int i = 0  ; i < n ;i++ ){
        cin>> a[i] ;
        if(a[i] < 0 && k > 0  ){
            a[i] *= -1 ;
            k--;
        }
    }
    sort(a.begin(), a.end()) ;
    if(k > 0 ){
        if(k & 1) {
            a[0] *= -1 ;
        }
    }
    cout << accumulate(a.begin(), a.end(), 0)<< endl;  
}