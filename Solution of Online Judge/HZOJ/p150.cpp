/*************************************************************************
	> File Name: p150.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 18时04分00秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int arr[205][205] ;

int main(){
    int n , m ;
    while (cin >> n >> m){
        memset(arr , 0 , sizeof(arr)) ;
        for (int i = 0 ; i < n ; i ++){
            for (int j = 0 ; j < m ; j ++){
                cin >> arr[i][j] ;
            }
        }
        for (int i = 0 ; i < m ; i ++){
            for (int j = n - 1 ; j >= 0 ; j --){    
                cout << arr[j][i] ;
                j && cout << " " ;
            }
            cout << endl ;
        }
    }
    return 0 ;
}
