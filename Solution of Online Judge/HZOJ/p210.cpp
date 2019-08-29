/*************************************************************************
	> File Name: 210.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 14时10分38秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    string str[n + 5] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> str[i] ;
    }
    sort(str , str + n) ;
    for (int i = 0 ; i < n ; i ++){
        i && cout << " " ;
        cout << str[i] ;
    }
    return 0 ;
}
