/*************************************************************************
	> File Name: 163.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月02日 星期五 19时45分18秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

const double Pi = cos(-1) ;

int main(){
    float a , b , ang ;
    while (cin >> a >> b >> ang){
        float c = a * a + b * b - 2 * a * b * cos(ang) ;
        printf("%.6f\n" , sqrt(c)) ;
    }
    return 0 ;
}
