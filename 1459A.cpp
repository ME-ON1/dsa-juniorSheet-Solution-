#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >>t ;
    while(t--) {
        int a ;
        cin >> a ;
        string r, b ;
        cin >> r >> b;
        int R = 0 , B = 0 ;
        for(int i = 0 ; i < r.size(); i++ ){
            if(r[i] > b[i]){
                R++;
            }else if(r[i] < b[i]){
                B++;
            }else {
                R++,B++;
            }
        }
        R > B ? cout << "RED"  : R == B ? cout << "EQUAL"  : cout << "BLUE" ;
        cout << endl;
    }
}