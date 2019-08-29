/*************************************************************************
	> File Name: 219.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 18时01分46秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[10005] ;

int main(){
    int n , l1 , r1 , l2 , r2 ;
    cin >> n >> l1 >> r1 >> l2 >> r2 ;
    for (int i = 1 ; i <= n ; i ++){
        cin >> arr[i] ;
    }
    
    sort(arr + l1 , arr + r1 + 1) ;
    sort(arr + l2 , arr + r2 + 1 , greater<int>()) ;
    for (int i = 1 ; i <= n ; i ++){
        i > 1 && cout << " " ;
        cout << arr[i] ;
    }
    return 0 ;
}
