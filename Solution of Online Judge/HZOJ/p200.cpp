/*************************************************************************
	> File Name: p200.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 19时21分27秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    int n ;
    while (cin >> n){
        int numerator = 4 , denominator = 7 ;
        double sum = (numerator * 1.0) / (denominator * 1.0) ;
        for (int i = 1 ; i < n ; i ++){
            double oldnume = numerator ;
            numerator = denominator ;
            denominator += oldnume ;
            sum += numerator / denominator ;
        }
        cout << numerator << "/" << denominator << endl ;
        printf("%.2lf\n" , sum) ;
    }
    return 0 ;
}
