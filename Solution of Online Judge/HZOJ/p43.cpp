/*************************************************************************
	> File Name: p43.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月14日 星期三 19时23分03秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

const int MAXN = 1005 ;

int arr[MAXN][MAXN] ;

int main(){
    int n ;
    scanf("%d" , &n) ;
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j <= i ; j ++){
            scanf("%d" , &arr[i][j]) ;
        }
    }
    for (int i = n - 2 ; i >= 0 ; i --){
        for (int j = 0 ; j <= i ; j ++){
            arr[i][j] += max(arr[i + 1][j] , arr[i + 1][j + 1]) ;
        }
    }
    printf("%d\n" , arr[0][0]) ;
    return 0 ;
}
