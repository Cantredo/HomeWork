/*************************************************************************
	> File Name: p55.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月23日 星期五 16时29分36秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int days[13] = {
    0  , 31 , 28 , 31 ,
    30 , 31 , 30 , 31 ,
    31 , 30 , 31 , 30
} ;

int Days(int y , int m){
    return days[m] + (m == 2 && (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))) ;
}

void next_day(int &y , int &m , int &d , int &cur_week){
    d += 1 ;
    cur_week += 1 ;
    if (cur_week > 7){
        cur_week = 1 ;
    }
    if (d > Days(y , m)){
        d = 1 , m += 1 ;
        if (m > 12){
            m = 1 , y += 1 ;
        }
    }
    return ;
}

int main(){
    int start_y , start_m , start_d ;
    int end_y , end_m , end_d ;
    cin >> start_y >> start_m >> start_d ;
    cin >> end_y >> end_m >> end_d ;
    int cur_y , cur_m , cur_d ;
    cur_y = start_y , cur_m = start_m , cur_d = start_d ;
    int most_y = 1900 , most_m = 1 , most_d = 1 , cur_week = 1 ;
    int time = 0 ;
    while (true){
        if (most_y == start_y && most_m == start_m && most_d == start_d) break ;
        next_day(most_y , most_m , most_d , cur_week) ;
        cout << "YES" << endl ;
    }
    cout << most_y << " " << most_m << " " << most_d << " " << cur_week << endl ;
    while (true){
        if (end_y == start_y && end_m == start_m && end_d == start_d) break ;
        if (cur_y == 6 && cur_m == 6 && cur_week == 6) time ++ ;
        next_day(start_y , start_m , start_d , cur_week) ;
        cout << "NO" << endl ;
    }
    cout << most_y << " " << most_m << " " << most_d << " " << cur_week << endl ; 
    cout << time << endl ;
    return 0 ;
}
