#include <bits/stdc++.h>

#define ll long long 
using namespace std ; 

int main () { 
    ll n , a, b, count = 0;
     cin >> n >>a >> b ;
     vector<pair<int,int>> v ;
     int ar[1001] = {0} ;
     for(int i = 0; i < n ; i++ ){
         int u , l ;
         cin >> u >> l ;
         v.push_back(make_pair(u,l));
     } 
     for(int i = 0; i < n ; i++ ){
         if(ar[i]) {
              continue ;
         }
         ar[i] = 1 ;
         count++ ;

         for(int j = 0 ; j < n ; j++ ){
             if((v[i].first-a)*(v[j].second-b)==(v[j].first-a)*(v[i].second-b)){
                 ar[j] = 1 ;
             }
             if(ar[j]){
                 continue ;
             }
         }
     }
     cout << count << endl ;

}
