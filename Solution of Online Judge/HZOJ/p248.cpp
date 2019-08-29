/*************************************************************************
	> File Name: p248.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月21日 星期三 16时48分30秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#define ll long long

using namespace std ;

const int MAXN = 500005 ;

ll arr[MAXN] , ans[MAXN] ;
ll cnt ;

void mergesort(int l , int r){
    ll mid = (l + r) >> 1 ;
    ll p = l , p1 = l , p2 = mid + 1 ;
    while (p1 <= mid && p2 <= r){
        if (arr[p1] > arr[p2]){
            ans[p ++] = arr[p2 ++] ;
            cnt += (mid - p1 + 1) ;
        }else{
            ans[p ++] = arr[p1 ++] ;
        }
    }
    while (p1 <= mid) ans[p ++] = arr[p1 ++] ;
    while (p2 <= r) ans[p ++] = arr[p2 ++] ;
    for (int i = l ; i <= r ; i ++){
        arr[i] = ans[i] ;
    }
    return ;
}

void merge(ll l , ll r){
    if (l >= r) return ;
    int mid = (l + r) >> 1 ;
    merge(l , mid) ;
    merge(mid + 1 , r) ;
    mergesort(l , r) ;
    return ;
}

int main(){
    int n ;
    while (scanf("%d" , &n) != EOF && n){
        for (int i = 0 ; i < n ; i ++){
            scanf("%lld" , &arr[i]) ;
        }
        cnt = 0 ;
        merge(0 , n - 1) ;
        cout << cnt << endl ;
    }
    return 0 ;
}
