#include <bits/stdc++.h>

using namespace std ;

void howSum(int target , vector<int> &p, vector<int> v){
    if(target == 0 ){
        return ;
    }else if(target < 0 ){
        return NULL ;
    }

    for(int i = 0 ; i < n ; i++ ){
        int targetSum = target - v[i];
        
    }
}

void recurse(int target, vector<int> v) {
    vector<int> p ;
    howSum(target, p, v);
}


int main () {
    int n ;
    cin >> n ;
    int target ;
    cin >> target ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> v[i] ;
    }

    recurse(target , v );
}