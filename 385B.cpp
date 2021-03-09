#include <bits/stdc++.h>
using namespace std ;
#define ll long long

int main ( ){
    string s; 
    cin >> s ;

    ll count = 0; 
    if(s.size() < 3){
        cout << 0 << endl ;
        return 0 ;
    }
    for(int i = 0; i < s.size()- 3 ; i++ ){
        for(int j = i; j < s.size() - 3 ; j++ ){
            if(s[j] == 'b' && s[j+1] == 'e' && s[j+2] == 'a' && s[j+3] == 'r'){
                count += s.size() - j - 3;
                break;
            }
        }
    }
    cout << count ;
    return 0; 
} 