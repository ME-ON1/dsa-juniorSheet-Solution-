#include <bits/stdc++.h>
using namespace std; 

bool recusion(int target , vector<int> arr ){
    if(target < 0 ){
        return 0 ;
    }else if(target == 0){
        return 1 ;
    }else  {
        for(int i = 0; i < arr.size(); i++ ){
            int remainder  = target - arr[i];
                cout << target << endl ;

            if(recusion(remainder , arr) == 1 ) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    int n;
    cin >> n; 
    int target ;
    cin >> target ;
    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++ ){
        int a ;
        cin >> a ;
        arr[i] = a;
    }

    cout << recusion(target, arr ) << " sdf " ;
}