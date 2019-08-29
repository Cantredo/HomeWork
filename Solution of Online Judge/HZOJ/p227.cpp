/*************************************************************************
	> File Name: p227.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月08日 星期四 21时57分18秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#define ll long long

using namespace std;

ll quick_mul(ll a , ll b , ll p){
    ll ans = 0 ;
    while (b){
        if (b & 1) ans = (ans % p + a % p) % p ;
        b >>= 1 ;
        a = (a % p + a % p) % p ;
    }
    return ans ;
}

int main(){
    ll a , b , p ;
    cin >> a >> b >> p ;
    cout << quick_mul(a , b , p) << endl ;
    return 0 ;
}
