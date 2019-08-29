/*************************************************************************
	> File Name: p449.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月14日 星期三 16时47分25秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int mapp[205][205] ;

void output(int n){
    mapp[1][1] = 1 ;
    for (int i = 2 ; i <= n ; i ++){
        for (int j = 1 ; j <= 2 * i ; j ++){
            if (j == 1 || j == 2 * i) mapp[i][j] = 1 ;
            mapp[i][j] = mapp[i - 1][j - 1] + mapp[i - 1][j] ;
        }
    }
    for (int i = 1 ; i <= n ; i ++){
        for (int j = 1 ; j <= i ; j ++){
            j > 1 && cout << " " ;
            cout << mapp[i][j] ;
        }
        cout << endl ;
    }
    return ;
}

int main(){
    int n ;
    cin >> n ;
    output(n) ;
    return 0 ;
}
