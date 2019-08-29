/*************************************************************************
	> File Name: 209.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 16时00分39秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n ;    
    cin >> n ;
    double arr[105] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i] ;
    }
    sort(arr , arr + n) ;
    for (int i = 0 ; i < n ; i ++){
        cout << arr[i] << endl ;
    }
    return 0 ;
}
