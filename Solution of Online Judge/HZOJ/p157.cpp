/*************************************************************************
	> File Name: 157.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月04日 星期日 17时34分10秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    int row = 2 * n - 1 ;
    int k = row ;
    char ch ;
    for (int i = 0 ; i < row / 2 + 1 ; i ++){
        ch = 'A' + i ;
        for (int j = 0 ; j < i ; j ++){
            cout << " " ;
        }
        for (int j = 0 ; j < k / 2 + 1 ; j ++){
            cout << ch ++ ;
        }
        ch -- ;
        for (int j = 0 ; j < k / 2 ; j ++){
            cout << -- ch ;
        }
        k -= 2 ;
        cout << endl ;
    }
    k += 4 ;
    char ch1 = ch ;
    int index = 1 ;
    for (int i = row / 2 - 1 ; i >= 0 ; i --){
        ch = ch1 - index ;
        for (int j = 0 ; j < i ; j ++){
            cout << " " ;
        }
        for (int j = 0 ; j < k / 2 + 1 ; j ++){
            cout << ch ++ ;
        }
        ch -- ;
        for (int j = 0 ; j < k / 2 ; j ++){
            cout << -- ch ;
        }
        k += 2 ;
        index ++ ;
        cout << endl ;
    }
    return 0 ;
}
