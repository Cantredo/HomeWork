/*************************************************************************
	> File Name: p451.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月14日 星期三 20时03分08秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    int arr[n + 5] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i] ;
    }
    sort(arr , arr + n) ;
    for (int i = 0 ; i < n ; i ++){
        i && cout << " " ;
        cout << arr[i] ;
    }
    cout << endl ;
    return 0 ;
}
