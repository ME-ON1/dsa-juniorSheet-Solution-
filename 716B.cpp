#include <bits/stdc++.h>

using namespace std ;

int arr[27]  ;

bool valid(){
	for(int i = 0 ; i < 26; i++){
		if(arr[i] >= 2){
			return false ;
		}
	}
	return true ;
}

void fillall(string& s ){
	for(int i = 0 ; i  < s.size() ; i++) {
		if(s[i] == '?'){
			s[i] = 'A' ;
		}
	}
}

int main(){
	string s ;
	cin >> s ;
	if(s.size() < 26) {
		cout << -1 ;
		return 0 ;
	}
	for(int i = 25 ; i < s.size(); i++ ){
		memset(arr, 0 , sizeof(arr));
		for(int j = i ; j >=  i-25 ; j-- ){
				arr[s[j] - 'A']++; 
		}
		if(valid()){
			int cnt =0 ;
			while(arr[cnt ] > 0) cnt++ ; //finding first ,missing letter
			for(int k = i -25 ; k <= i; k++) {
				if(s[k] == '?'){
					s[k] = cnt + 'A'; 
					cnt++ ;
					while(arr[cnt ] > 0) cnt++ ;		
				}
			}
			fillall(s);
			cout <<s << endl ;
			return 0; 
		}
	}		
	cout << -1 ;
	return 0 ;
}
