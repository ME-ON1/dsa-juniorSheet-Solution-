#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main( ){
    int n , x ;
    cin >> n >> x ; 
    vector<int> a(x) ;
    ll sum = 0;
    for(int i = 0; i < x; i++ ){
        cin >> a[i] ; 
    
        sum += ceil(a[i]/x)  ;
    }
    ll min = 0 ,max = 0; 
    for(int i = 0 ; i < n - 1; i++ ){
        // cout << a[i ] << " " << a[i+1] << endl;
        ll sum1  = ceil((a[i] + a[i+1])/x); 
        cout << sum1 << " " ;
        for(int j = 0  ; j < n - 1 ; j++ ){
            if(j == i || j == i + 1  ){
               continue ;
            // cout << a[j] << " " ; 
            }else {
                 cout << j << " " << a[j] << " " ; 
               sum1 += ceil(a[j]/x);
            }
        }
        // if(i != n -1 ){
        //     sum1 += ceil(a[n-1]/x);
        // }
        cout << sum1 ;
        cout << endl;
        min = std::min(sum1, sum ) ;
        max = std::max(sum1 , sum );
    }
    cout << min << "  " << max << endl;

    return 0;
}