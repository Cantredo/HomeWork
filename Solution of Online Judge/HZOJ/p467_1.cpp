/*************************************************************************
	> File Name: p467.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 20时19分38秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long long func(int n){
    return n <= 1 ? 1 : n * func(n - 1) ;
}

int main(){
    int n ;
    cin >> n ;
    cout << func(n) << endl ;
    return 0 ;
}
