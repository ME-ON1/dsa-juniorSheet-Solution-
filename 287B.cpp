#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
    ll n , k ;
    ll sum_of_value = 0 ;
    ll count = 0;
    vector<int> a(k) ;
    for(int i = 1; i <= k ; i++ ){
        a[i] = i ;
    } 
    while(sum_of_value < n) {
        ll p = lower_bound(a.begin() + 1 ,a.end(), sum_of_value);
        p += sum_of_value;
        count++ ;
    }
    cout << count << endl;
    return 0;
}