/*************************************************************************
	> File Name: p243.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月21日 星期三 17时53分32秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#define ll long long

using namespace std ;

const int MAXN = 200005 ;
const int INF = 0x3f3f3f3f ;
const ll INF_ = 2 << 61 ;

typedef struct{
    ll s , e , d ;
}Array ;

Array arr[MAXN] ;
ll presum[MAXN] ;
ll p[MAXN] ;

void add(ll l , ll r , ll k){
    p[l] += k , p[r + 1] -= k ;
    return ;
}

int main(){
    int t ;
    cin >> t ;
    while (t --){
        int n ;
        cin >> n ;
        ll left = INF_ , right = -1 ;
        for (int i = 0 ; i < n ; i ++){
            scanf("%d%d%d" , &arr[i].s , &arr[i].e , &arr[i].d) ;
            add(arr[])
        }
    }
    
    
    
    return 0 ;
}
