#include <bits/stdc++.h>
using namespace std ;

bool check(int a, int b , int x , int y , int r ){
    if(pow((x-a),2) + pow((y-b),2) > r*r) {
        return 0 ;
    }else {
        return 1 ;
    }
}

int main() {
    int a, b, c ,d ;
    cin >> a >> b >> c >> d ;
    set<pair<int,int>> st ;
    int xmin = 0 , xmax = 0 , ymin = 0 , ymax = 0; 
    xmin = min(a, c)  ;
    xmax = max(a,c) ;
    ymin = min(b,d) ;
    ymax = max(b,d) ;
    for(int i = ymin ; i <= ymax; i++ ) st.insert(make_pair(xmin,i)); 
    for(int i = ymin ; i <= ymax; i++ ) st.insert(make_pair(xmax,i)); 
    for(int i = xmin ; i <= xmax; i++ ) st.insert(make_pair(i,ymin)); 
    for(int i = xmin ; i <= xmax; i++ ) st.insert(make_pair(i,ymax)); 

    int n; 
    cin >> n; 
    vector<pair<int, int>> arr ;
    vector<int> rad ; 
    for(int i = 0 ; i < n ; i++ ){
        int a, b,c  ;
        cin >> a>> b >> c ;
        arr.push_back(make_pair(a,b));
        rad.push_back(c);
    }
    
     for(auto j = 0  ; j < n ; j++ ){
        auto i  = st.begin();
        while(i != st.end()){
            if(check(i->first, i->second ,arr[j].first, arr[j].second,rad[j] )){
                st.erase(i) ; 
                i = st.begin() ;
            }else {
                i++ ;
            }
        }
    } 
    cout << st.size() ;
    return 0 ;
}