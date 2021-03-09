#include <bits/stdc++.h>
using namespace std ;

int main() {
    int p ; 
    p=  30 ;
    int *u = &p ;
    // *u = 45; 
    int **k;
    k = &u ;
    **k = 80 ;
    // cout << o << " " << *o ;
    const char *lin[6] = 
	  { "Debian", "Ubuntu", "OpenSuse", "Fedora", "Linux Mint", "Mandriva"};
      cout << lin << " " << *lin << endl ;
     
}

// cout << *o << endl ;
    // // *o = u ;
    // // ( o + 1 ) = 40 ;
    // // int *i = u ;
    // // if(i == &p )
    // // cout << i << " " << &p << " " << u  << " " << *(o +1 ) << endl;
    // // cout << i << " " << *i << endl; /
    // // cout << *o << endl; 
    // for(int i = 0 ; i < 100; i++ ){
    //     *(o + i) = 1 ;
    //     cout << o + i << " " << *(o+i) << " " << o[i] << endl; 
    // }
    // // cout /*<< ( o + 0 )*/<< *(o + 0)  << endl ;
    // // cout << u << " "<< o + 1 << " " << *(o + 1) <<  " " << *u <<  " " << p << " " << &p << endl; 