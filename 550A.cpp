#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

int main ( ){
	string s ;
	cin >> s ;
	bool flag1 =0 , flag2 = 0 ;
	if(s == "ABA" || s == "BAB ){
		cout << "NO" << endl ;
	}else
	{
		char src , end; 
		for(int i = 0 ; i < s.size() ; i++) {
			if(s[i] == 'B' && s[i + 1 ] == 'A'){
				flag1 = 1 ;
				src = 'B' ;
				end = 'A' ;
				break;
			}
			else if(s[i] == 'A' && s[i+1] == 'B'){
				flag1 = 1; 
				src = 'A'; 
				end = 'B' ;
				break ;
			}
		}

		for(int i = s.size()-1; i >= 0 ; i-- ){
			if(s[i+1] == src && s[i] == end ){
				flag2 = 1;
			}
		}

		flag1 == 1 && flag2 == 1 ? cout << "YES" : cout << "NO";
	}
	
    	return 0;
}
