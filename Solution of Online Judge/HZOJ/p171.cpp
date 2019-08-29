/*************************************************************************
	> File Name: p171.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 17时48分13秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int main(){
    string str ;
    cin >> str ;
    int len = str.size() ;
    bool check = false ;
    for (int i = 1 ; i < len ; i ++){
        if (str[i] != '0'){
            check = true ;
            break ;
        }
    }
    if (check){
        for (int i = 0 ; i < len / 2 ; i ++){
            str[len - i - 1] = str[i] ;
        }
        cout << str << endl ;
    }else{
        for (int i = 0 ; i < len - 1 ; i ++){
            cout << 9 ;
        }
    }
    cout << endl ;
    return 0 ;
}
