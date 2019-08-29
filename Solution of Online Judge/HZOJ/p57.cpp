/*************************************************************************
	> File Name: p57.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月23日 星期五 15时42分31秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int main(){
    string str = "1" ;
    int length = 1 , t = 2 ;
    while (length < 1000005){
        str += to_string(t) ;
        length += floor(log10(t)) + 1 ;
        t ++ ;
    }
    int x , y , z ;
    cin >> x >> y >> z ;
    cout << (str[x - 1] - '0') * (str[y - 1] - '0') * (str[z - 1] - '0') << endl ;
    return 0 ;
}
/*
123456789101112131415
*/
