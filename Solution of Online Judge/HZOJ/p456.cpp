/*************************************************************************
	> File Name: p456.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 18时42分15秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

const int MAXN = 1000000 ;

int cnt[MAXN + 5] ;

int main(){
    int n ;
    scanf("%d" , &n) ;
    int arr[n + 5] ;
    for (int i = 0 ; i < n ; i ++){
        scanf("%d" , &arr[i]) ;
        cnt[arr[i]] ++ ;
    }
    for (int i = 0 ; i < MAXN ; i ++){
        if (cnt[i] & 1){
            printf("%d\n" , i) ;
            break ;
        }
    }
    return 0 ;
}
