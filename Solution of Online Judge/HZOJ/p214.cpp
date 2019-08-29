/*************************************************************************
	> File Name: 214.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 20时08分47秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    int arr[n + 5] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i] ;
    }
    sort(arr , arr + n , greater<int>()) ;
    int k ;
    cin >> k ;
    double average = 0.0 ;
    for (int i = 0 ; i < k ; i ++){
        average += arr[i] ;
    }
    printf("%.2lf" , average / k) ;
    return 0 ;
}
