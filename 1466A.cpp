#include <bits/stdc++.h>
using namespace std ;
#define ll long long


int main(){
    ll t ;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
        vector<int> a(n);
        set<double> st;
        for(int i= 0 ; i < n ; i++ ){ cin >> a[i] ;}
        for(int i = 0;  i < n ; i++ ){
            for(int j = i+1 ; j < n ; j++ ){
                double x, y, z ;
                pair<int,int> p1, p2 ,p3 ; 
                p1 = make_pair(0, 1);
                p2 = make_pair(a[i], 0); 
                p3 = make_pair(a[j], 0);
                double area = 0.5* (p2.first* (p3.second - p1.second) + p3.first * (p1.second - p2.second));
                // cout << area << endl ;
                st.insert(area);
            }
        }
        cout << st.size() << endl ;
    }
}