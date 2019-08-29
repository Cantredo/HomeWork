/*************************************************************************
	> File Name: 178.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月07日 星期三 20时04分07秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

char func(int x){
    if (x == 1) {
        return char(x + 64) ;
    }
    cout << func(x - 1) ;
    cout << char(x + 64) ;
    cout << func(x - 1) ;
}

int main(){
    int n ;
    cin >> n ;
    cout << func(n) ;
    //cout << char(n - 1 + 65) << endl ;
    return 0 ;
}
