#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long

// bool calslope(vector<int> &a, int &m1 , int &m2){
//     // if()
//     m1 = (a[3] - a[1]) / (a[2] - a[0]);
//     m2 = (a[7] - a[5]) / ( a[6] - a[4]) ;
//     // m1 == m2 ? return 1 : return 0;
//     return m1 == m2 ;
// }

// void make_equation(vector<int> &a, int m1, int m2){
//     int 
// }

int main(){
    ll n ;
    cin >> n;
    while(n-- ) {
        vector<int> a(8); 
        for(int i = 0 ; i < 8 ; i++ ){
            cin >> a[i];
        }
        int m1 , m2 ; 
        // calslope(a, m1 ,m2);
        double comman_part, X, Y;
            comman_part = ((a[7] - a[5]) * (a[2] - a[0])) - (( a[6] - a[4]) * (a[3] - a[1]));
            cout << comman_part << endl;
        if(comman_part != 0) {
            // cout << " c "  << comman_part << endl; 
            X = (m2 * a[4] + a[5] + m1 * a[0] + a[1]) / ( comman_part) ;
             Y = (m2 * (m1 * a[0] + a[1])  + m1 * (m2 * a[4] + a[5]))/ comman_part ;
            printf("%0.2f %0.2f\n", X,Y);
        }else {
            if(m1 * a[0] - a[1] == m2 * a[4] - a[5]){
                cout << "LINE" << endl;
            }else {
                cout << "NONE" << endl;
            }
        }
        // cout << m1 << " " << m2 << endl;
    }
    return 0;
}