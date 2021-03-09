#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
    string s , t ;
    cin >> s >> t; 
    int aut = false; 
    int arr[26] = {0} ;
     // def a case for automation or for nerd tree 
    if (s.find(t) != string::npos) {
	aut = true ; 		
    }
    map<int,int> mp ;
    for(int i = 0 ; i < s.size() ;i++ ){
	arr[s[i] - 'a']++ ;
	mp[s[i] -'a']++ ;
    }
    for(int i = 0 ; i < t.size(); i++ ){
	    arr[t[i] - 'a']-- ;
    }
    int arra = true, both = true; ;
    for(int i = 0 ; i < 26; i++ ){
		arra &= arr[i] == 0 ; // arry
		both &= arr[i] >= 0 ; 

    } 


    if(aut) {
	    cout << "automaton" << endl ;
    }else if(arra){
	    cout << "array" << endl;
    } else if(both) {
	    cout << "both" << endl ;
    } else {
	    cout << "need tree" << endl ;
    }
    return 0;
}
