#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

struct Point{
    int x_len , y_len ;
    int x_point , y_point ;
}point[10005] ;

int main(){
    int t ;
    cin >> t ;
    for ( int i = 1 ; i <= t ; i ++ ){
        int x_lenth , y_lenth ;
        cin >> point[i].x_point >> point[i].y_point >> x_lenth >> y_lenth ;
        point[i].x_len = x_lenth + point[i].x_point ;
        point[i].y_len = y_lenth + point[i].y_point ;
    }
    int x , y ;
    cin >> x >> y ;
    bool check = false ;
    int index = 0 ;
    for ( int i = t ; i >= 1 ; i -- ){
        if ( x <= point[i].x_len && x >= point[i].x_point && y <= point[i].y_len && y >= point[i].y_point){
            index = i ;
            check = true ;
            break ;
        }
    }
    if ( check ){
        cout << index << endl ;
    }else{
        cout << -1 << endl ;
    }
    return 0 ;
}
