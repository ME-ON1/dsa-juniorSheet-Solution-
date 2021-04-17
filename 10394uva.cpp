#include <bits/stdc++.h>
using namespace std ;

#define ll long long
const ll MAX = 100001 ;
bool prime[20000010] ;
int twin[20000010] ;

void cal() {
	int j = 1 ;
	for(int i = 3 ; i <= 20000000 ; i++ ){
		if(prime[i] && prime[i+2]){
			twin[j++] = i ;
		}
	}

}
void prep() {
	int i,j;
	for(i=4;i<=20000000;i+=2)
	{
		prime[i]=false;

	}
	for(i=3;i*i<=20000000;i+=2)
	{
		if(prime[i]==true)
		{
			for(j=i*i;j<=20000000;j+=i+i)
			{
				prime[j]=false;

			}

		}

	}
	cal();
}


int main ( ){
	memset(prime , true , sizeof prime );
	prep() ;
	ll n ;
	while(scanf("%ld", &n) == 1) {
		cout << "("<<twin[n] << ", " << twin[n] + 2  << ")"<< endl ;
	}
	return 0;
}
