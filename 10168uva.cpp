#include <bits/stdc++.h>
using namespace std ;

#define ll long long
const ll N = 10000000;
bool prime[N];



void prep(){
	memset(prime, true ,N  ) ;

	for (int i = 2; i*i <= N ; i++)
		if (prime[i] == 1)
			for (int j = i << 1; j < N; j += i)
				prime[j] = false ;

}

void gc(int target, int n  ){

	for(int  i = 2 ; i < n ; i++ ) {
		if(prime[i] && prime[target - i]) {
			cout <<  " " << i << " " << target - i  << endl ;
			return ;
		}
	}

}

int main ( ){

	prep() ;
	ll n ;
	//for(int i = 0 ; i < 20 ; i++ ) {
	//cout << prime[i] << " " ;
	//}
	while(scanf("%ld", &n) != EOF) {
		if(n < 8 ) {
			cout << "Impossible." << endl ;
		}else if(n & 1) {
			cout << 2 << " " << 3 ;
			int target = n - 5 ;
			gc(target, n );

		}else {
			cout << 2 << " " << 2 ;
			int target = n - 4;
			gc(target, n );
		}
	}
	return 0;
}
