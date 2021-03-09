#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main (){
	int t ; 
	cin >> t; 
	while(t--){
		string s ;
		cin >> s ;
		for(int i = 0 ; i < s.size(); i++ ){
			if(i & 1) { // odd = bob  
				if(s[i] == 'z'){
					s[i] = 'y'; 
				}else {
					s[i] = 'z' ;
				}
			}else {
				if(s[i] == 'a') {
					s[i] = 'b' ;
				}else {
					s[i] = 'a' ;
				}
			}
			
		}
		cout << s << endl;
	}

    return 0;
}
