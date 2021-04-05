#include <bits/stdc++.h>
using namespace std ;

#define ll long long

ll sum(ll n)
{
	if (n == 0)
		return 0;
	if(n%9 == 0 ) {
		return 9 ;
	}else {
		return n%9 ;
	}

}

int main()
{
	ll n ;
	cin >> n;

	cout<<  sum(n);
	return 0;
}

