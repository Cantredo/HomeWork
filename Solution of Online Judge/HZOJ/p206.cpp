/*************************************************************************
	> File Name: 206.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 13时44分53秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

double arr[35][35] ;

int main(){
    int n , m ;
    cin >> n >> m ;
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < m ; j ++){
            cin >> arr[i][j] ;
        }
    }
    for (int i = 0 ; i < m ; i ++){
        double sum = 0 ;
        for (int j = 0 ; j < n ; j ++){
            sum += arr[j][i] ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}
