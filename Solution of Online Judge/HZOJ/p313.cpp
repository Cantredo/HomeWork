/*************************************************************************
	> File Name: p313.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月09日 星期五 19时14分01秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int n , k ;
    cin >> n >> k ;
    long long sum = 0 ;
    for (int i = 0 ; i < n ; i ++){
        sum += k % (i + 1) ;
    }
    cout << sum << endl ;
    return 0 ;
}
