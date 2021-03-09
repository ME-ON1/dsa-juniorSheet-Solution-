#include <bits/stdc++.h>
using namespace std ;

int main () {
    int t; 
    cin >> t;
    while(t-- ){
        int n ;
        cin >> n;
        string s; 
        cin >> s; 
        int bad = 0 ;
        for(int i = s.size() - 1 ; i >= 0; i-- ) {
            // cout << s[i] << " " ;
            if(s[i] == ')'){
                bad++;
            }else {
                break ;
            }
        }
        if(bad > s.size() - bad){
           cout << "YES" << endl ; 
        }else {
            cout << "NO" << endl;
        }
    }
}