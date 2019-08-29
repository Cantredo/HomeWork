/*************************************************************************
	> File Name: p466.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 20时27分35秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool is_valid(int number){
    int tmp = number , x = 0 ;
    while (number > 0){
        x = x * 10 + number % 10 ;
        number /= 10 ;
    }
    return x == tmp ;
}

int main(){
    int n ;
    cin >> n ;
    int cnt = 0 ;
    for (int i = 1 ; i <= n ; i ++){
        if (is_valid(i)) cnt ++ ;
    }
    cout << cnt ;
    return 0 ;
}
