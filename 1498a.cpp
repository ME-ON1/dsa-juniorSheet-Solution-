#include <bits/stdc++.h>
using namespace std ;

#define ll long long

ll sum(ll n ) {
	ll sum = 0 ;
	while(n != 0 )
	{
		sum += n % 10 ;
		n = n /10 ;
	}
	return sum;
}

bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;

}

int main ( ){
	ll t;
	cin >> t ;
	while(t--) {
		ll n ;
		cin >> n;
		if(n < 10 ){
			cout << n << "\n" ;
			continue ;
		}
		while(1) {
			if(isPrime(n) ) {
				n++ ;
			}else {

			if(__gcd(n, sum(n) ) > 1) {
				cout << n << endl ;
				break ;
			}else {
				n++ ;
			}
			}
		}
		//cout << n << endl ;
	}
	return 0;
}
