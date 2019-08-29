/*************************************************************************
	> File Name: 212.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 15时06分38秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    string str[15] ;    
    for (int i = 0 ; i < 10 ; i ++){
        cin >> str[i] ;
    }
    sort(str , str + 10) ;
    for (int i = 0 ; i < 10 ; i ++){
        cout << str[i] << endl ;
    }
    return 0 ;
}
