/*************************************************************************
	> File Name: p388.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月21日 星期三 15时01分55秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

const int MAXN = 1000000000 ;

bool arr[MAXN] = {0} ;

int main(){
    int m , n ;
    cin >> m >> n ;
    int sum = 0 ;
    bool first = true ;
    for (int i = 0 ; i < m * n ; i ++){
        int number ;
        cin >> number ;
        arr[number] ++ ;
        if (arr[number] == 2){
            if (first) cout << number , first = false ;
            else cout << " " << number ;
            sum += number ;
        }
    }
    cout << endl << sum << endl ;
    return 0 ;
}
