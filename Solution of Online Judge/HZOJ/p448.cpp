/*************************************************************************
	> File Name: p448.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 19时28分31秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[105] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i] ;
    }
    int number , index = -1 ;
    cin >> number ;
    bool check = false ;
    for (int i = 0 ; i < n ; i ++){
        if (arr[i] == number){
            index = i + 1 ;
            check = true ;
            break ;
        }
    }
    if (check) cout << index << endl ;
    else cout << 0 << endl ;
    return 0 ;
}
