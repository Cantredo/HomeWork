/*************************************************************************
	> File Name: p455.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 18时25分52秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int gcd(int a , int b){
    return b ? gcd(b , a % b) : a ;
}

int main(){
    int arr[3] ;
    cin >> arr[0] >> arr[1] >> arr[2] ;
    sort(arr , arr + 3) ;
    int k = gcd(arr[0] , arr[2]) ;
    printf("%d/%d\n" , arr[0] / k , arr[2] / k) ;
    return 0 ;
}
