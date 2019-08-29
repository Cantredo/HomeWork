/*************************************************************************
	> File Name: p457.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 19时02分22秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;


bool check[200000005] = {false} ;

int main(){
    int n ;
    scanf("%d" , &n) ;
    int arr[n + 5] ;
    for (int i = 0 ; i < n ; i ++){
        scanf("%d" , &arr[i]) ;
    }
    for (int i = 1 ; i < n ; i ++){
        int number = abs(arr[i] - arr[i - 1]) ;
        if (number >= 1 && number <= n - 1){
            check[number] = true ;
        }else{
            break ;
        }
    }
    bool flag = true ;
    for (int i = 1 ; i <= n - 1 ; i ++){
        if (!check[i]) flag = false ;
    }
    if (flag) cout << "Jolly" << endl ;
    else cout << "Not jolly" << endl ;
    return 0 ;
}
