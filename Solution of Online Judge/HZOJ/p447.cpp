/*************************************************************************
	> File Name: p447.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 19时30分50秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

bool check(int number){
    while (number > 0){
        if (number % 10 == 4 || number % 10 == 7){
            number /= 10 ;
            continue ;
        }
        return false ;
    }
    return true ;
}

int main(){
    int number ;
    cin >> number ; 
    if (check(number)){
        cout << "YES" << endl ;
        return 0 ;
    }
    for (int i = number + 1 ; i <= 1000000 ; i ++){
        if (check(i) && i % number == 0){
            cout << "YES" << endl ;
            return 0 ;
        }
    }
    cout << "NO" << endl ;
    return 0 ;
}
