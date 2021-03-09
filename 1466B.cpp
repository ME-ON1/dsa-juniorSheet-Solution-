#include <bits/stdc++.h>
using namespace std ; 
#define ll long long 


int main () {
    ll t;
    cin >> t; 
    while(t--) {
        int n ;cin >>n ;
        vector<int> a(n) ;
        for(int i = 0; i < n ; i++ ) cin >> a[i ];
        sort(a.begin(), a.end() );
        // ll prev = a[0];
        for(int i = 0 ; i < n - 1 ; i++ ){
            if(a[i] == a[i+1]){
                int  j  =  i;
                while(a[j] == a[j+1]){
                    j++;
                }
                a[j]++ ;
                i = j-1;
                continue ;

            }
        }
        set<int> st; 
        for(auto i : a ) {st.insert(i); }
        cout << st.size() << endl ;

    }
}