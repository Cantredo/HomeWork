/*************************************************************************
	> File Name: p465.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 20时31分13秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long long func(long long n , long long k){
    int len = floor(log10(n)) + 1 ;
    if (k > len) return 0 ;
    k -- ;
    while (k --){
        n /= 10 ;
    }
    return n % 10 ;
}

int main(){
    long long n , k ;
    cin >> n >> k ;
    cout << func(n , k) << endl ;
    return 0 ;
}
