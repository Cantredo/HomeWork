/*************************************************************************
	> File Name: p226.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 13时48分36秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#define ll long long

using namespace std;

ll quick_pow(ll a , ll b , ll p){
    ll ans = 1 ;
    while (b){
        if (b & 1) ans = (ans % p * a % p) % p ;
        a = (a % p * a % p) % p ;
        b >>= 1 ;
    }
    return ans % p ;
}

int main(){
    ll a , b , p ;
    while (cin >> a >> b >> p){
        cout << quick_pow(a , b , p) << endl ;
    }
    return 0 ;
}
