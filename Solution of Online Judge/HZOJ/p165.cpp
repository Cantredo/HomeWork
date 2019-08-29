/*************************************************************************
	> File Name: 165.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月31日 星期三 14时24分44秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#define ll long long

using namespace std;

bool check(ll a , ll b , ll c){
    if (a + b > c && a - b < c){
        return true ;
    }
    return false ;
}

int binary_search(int l , int r , int number){
    while (l < r){
        int mid = (l + r) >> 1 ;
        if (number < mid){
            l = mid ;
        }else if (number > mid){
            r = mid + 1 ;
        }else{
            return mid ;
        }
    }
    return 0 ;
}

int main(){
    int c ;
    while (cin >> c){
        int ans = 0 ;
        for (ll a = 1 ; a < 1e6 ; a ++){
            if (check(a , c * c - a * a , c) && binary_search(a , c , c * c - a * a)){
                ans ++ ;    
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}
