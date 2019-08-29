/*************************************************************************
	> File Name: p193.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 18时45分38秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int binary_search(int l , int r , int number , int arr[]){
    while (l < r){
        int mid = (l + r) >> 1 ;
        if (arr[mid] < number){
            l = mid + 1 ;
        }else if (arr[mid] > number){
            r = mid ;
        }else{
            return arr[mid] ;
        }
    }
    return -1 ;
}



int main(){
    int n ;
    while (cin >> n){
        int arr[n + 5] ;
        for (int i = 0 ; i < n ; i ++){
            cin >> arr[i] ;
        }
        int k , s ;
        cin >> k >> s ;
        if (binary_search(0 , n , s - k , arr) != -1){
            cout << "Yes" << endl ;
        }else{
            cout << "No" << endl ;
        }
    }
    return 0 ;
}
