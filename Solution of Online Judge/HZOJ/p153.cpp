/*************************************************************************
	> File Name: 153.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月04日 星期日 16时24分11秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int y , m , d ;
    cin >> y >> m >> d ;
    m = m == 1 ? (y -- , 13) : m == 2 ? (y -- , 14) : m ;
    int h = (d + 26 * (m + 1) / 10 + y % 100 + y % 100 / 4 + y / 100 / 4 + 5 * (y / 100)) % 7 ;
    switch (h){
        case 0: cout << 6 << endl ; break ;
        case 1: cout << 7 << endl ; break ;
        case 2: cout << 1 << endl ; break ;
        case 3: cout << 2 << endl ; break ;
        case 4: cout << 3 << endl ; break ;
        case 5: cout << 4 << endl ; break ;
        case 6: cout << 5 << endl ; break ;
    }
    return 0 ;
}
