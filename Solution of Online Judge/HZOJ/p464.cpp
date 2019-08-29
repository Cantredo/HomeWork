/*************************************************************************
	> File Name: p464.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 20时37分09秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool is_valid(int year){
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        return true ;
    }
    return false ;
}

int main(){
    int x , y ;
    cin >> x >> y ;
    int cnt = 0 ;
    for (int i = x ; i <= y ; i ++){
        if (is_valid(i)) cnt ++ ;
    }
    cout << cnt << endl ;
    return 0 ;
}
