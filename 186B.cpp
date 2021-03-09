#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool sort_this(pair<double,int > i1, pair<double,int > i2){


	if(i1.first < i2.first){
		return 0 ;
	}else if (i1.first == i2.first){
		return i1.second < i2.second ;
	}
	return 1 ;
}

int main() {
	
	int n , t1,t2, k ;
	cin >> n >> t1 >> t2 >> k ;
	int g = 0 ;
	vector<pair<double,int>> arr ;
	while(n--){
		g++ ;
		int a,b ;
		cin >> a >> b ;
		double h_part_1 = min(a , b) * min(t1, t2) ;
		double dec = ( k * h_part_1 )/ 100 ;
		double f_height_part = h_part_1 - dec  + max(a,b ) * max(t1, t2);
		arr.push_back(make_pair(f_height_part, g )) ;
	}
	
	sort(arr.begin(), arr.end(),sort_this) ;

	
	for(auto i : arr  ){
		// cout << i.second << " " << i.first<<  endl ;
        printf("%d %0.2f\n",i.first, i.second) ;

	}
	
	return 0;
}