#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	map<int,string > mp = {
		{0, "" } ,
		{1 , ""} ,
		{2, "2"} ,
		{3 ,"3" } ,
		{4, "322"},
		{5 , "5"} ,
		{6 , "53" },
		{7, "7"} ,
		{8 , "7222"} ,
		{9, "7332"}
	} ;

	string s, p ;
	int n ;
	cin >> n >> s ;
	for(int i = 0 ; i < n ; i ++ ){
		p += mp[(int)s[i]%48] ;
	}
	sort(p.begin(), p.end(), greater<char>()) ;
	cout << p  << "\n";
    return 0;
}
