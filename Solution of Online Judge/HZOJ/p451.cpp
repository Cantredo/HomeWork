/*************************************************************************
	> File Name: p451.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月14日 星期三 20时05分38秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int arr[100005] ;

int main(){
    int n ;
    scanf("%d" , &n) ;
    for (int i = 0 ; i < n ; i ++){
        scanf("%d" , &arr[i]) ;
    }
    sort(arr , arr + n) ;
    for (int i = 0 ; i < n ; i ++){
        printf("%d\n" , arr[i]) ;
    }
    return 0 ;
}
