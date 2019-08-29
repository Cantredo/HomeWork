/*************************************************************************
	> File Name: 196.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 15时52分17秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int f[55] ;

void func(int n){
    f[2] = f[3] = f[4] = 1 ;
    for (int i = 5 ; i <= n ; i ++){
        f[i] = f[i - 2] + f[i - 3] ;
    }
    cout << f[n] << endl ;
}

int main(){
    int n ;
    cin >> n ;
    func(n) ;
    return 0 ;
}
