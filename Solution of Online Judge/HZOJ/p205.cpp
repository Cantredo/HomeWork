/*************************************************************************
	> File Name: 205.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月31日 星期三 13时52分15秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

double arr[35][35] ;

int main(){
    int n , m ;
    while (cin >> n >> m){
        for (int i = 0 ; i < n ; i ++){
            for (int j = 0 ; j < m ; j ++){
                cin >> arr[i][j] ;
                arr[i][m + 1] += arr[i][j] ;
            }
            arr[i][m + 1] /= m ;
        }
        for (int i = 0 ; i < n ; i ++){
            printf("%.6lf\n" , arr[i][m + 1]) ;
        }
    }
    return 0 ;
}
