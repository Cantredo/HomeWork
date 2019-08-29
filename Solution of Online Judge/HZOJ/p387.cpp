/*************************************************************************
	> File Name: p387.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月21日 星期三 14时34分03秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std ;

int main(){
    int m , n ;
    scanf("%d%d" , &m , &n) ;
    map<int , int> map_ ;
    for (int i = 0 ; i < m ; i ++){
        int number ;
        scanf("%d" , &number) ;
        map_[number] = i + 1 ;
    }
    map<int , int>::iterator it ;
    for (int i = 0 ; i < n ; i ++){
        int number ;
        scanf("%d" , &number) ;
        it = map_.lower_bound(number) ;
        if (it != map_.end()) cout << it->second << endl ;
        else cout << 0 << endl ;
    }
    return 0 ;
}
