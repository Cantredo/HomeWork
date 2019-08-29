/*************************************************************************
	> File Name: p468.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 17时02分56秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int gcd(int x , int y){
    return y ? gcd(y , x % y) : x ;
}

int main(){
    int m , n ;
    cin >> m >> n ;
    cout << gcd(m , n) << endl ;
    return 0 ;
}
