/*************************************************************************
	> File Name: 197.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 15时58分03秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int arr[15] ;
    for (int i = 0 ; i < 10 ; i ++){
        cin >> arr[i] ;
    }
    sort(arr , arr + 10 , greater<int>()) ;
    for (int i = 0 ; i < 10 ; i ++){
        i && cout << " " ;
        cout << arr[i] ;
    }
    cout << endl ;
    return 0 ;
}
