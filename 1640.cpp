#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main ( ){
	int n ;
	cin >> n ;

	int target ;
	cin >> target ;
	vector<pair<int, int>> nums(n) ;
	for(int i = 0; i < n ;i++) {
		int a ;
		cin >> a  ;
		nums[i] = make_pair(a, i) ;
	}
	sort(nums.begin() , nums.end() );

	int l = 0 , r = nums.size() - 1 ;

	while(l < r ) {
		if(nums[l].first + nums[r].first > target ) {
			r -- ;
		}else if(nums[l].first + nums[r].first < target ) {
			l ++ ;
		}else if(nums[l].first  + nums[r].first == target ) {
			cout << nums[l].second  +1 << " " << nums[r].second + 1 ;
			return 0 ;
		}
	}

	cout << "IMPOSSIBLE" << endl ;
    return 0;
}
