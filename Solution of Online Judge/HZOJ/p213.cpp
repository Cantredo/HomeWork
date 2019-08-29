/*************************************************************************
	> File Name: p213.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 18时54分26秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    while (cin >> n){
        int arr[n + 5] , ans[7] ;
        memset(ans , 0 , sizeof(ans)) ;
        for (int i = 0 ; i < n ; i ++){
            cin >> arr[i] ;
            int k = arr[i] / 10 ;
            switch (k){
                case 10: ans[1] ++ ; break ;
                case 9 : ans[2] ++ ; break ;
                case 8 : ans[3] ++ ; break ;
                case 7 : ans[4] ++ ; break ;
                case 6 : ans[5] ++ ; break ;
                default: ans[6] ++ ; break ;
            }
        }
        sort(arr , arr + n , greater<int>()) ;
        for (int i = 0 ; i < n ; i ++){
            cout << arr[i] << endl ;
        }
        for (int i = 0 ; i < 6 ; i ++){
            i && cout << " " ;
            cout << ans[i + 1] ;
        }
        cout << endl ;
    }
    return 0 ;
}
