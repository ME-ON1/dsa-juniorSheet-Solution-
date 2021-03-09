#include <bits/stdc++.h>
#define ll long long 
using namespace std ; 

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    sort(arr.begin(), arr.end());
    ll max = 0; 
    for(int i = 0 ; i < n -1  ; i++ ){
       ll beg= i , end = n - 1 , mid ;
       while(beg < end ){
           mid = beg + (end - beg + 1)/2 ;
            if(arr[mid] <= arr[i]* 2 ){
                beg = mid ; 
            }else if(arr[mid] > arr[i] * 2){
                end = mid - 1 ;
            }
       }    
        max = std::max(max, beg - i + 1);
    //    cout << beg - i + 1<< endl ; 
    }
    cout <<  n - max << endl;
}