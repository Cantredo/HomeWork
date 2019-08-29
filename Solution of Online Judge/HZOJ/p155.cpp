/*************************************************************************
	> File Name: 155.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月02日 星期五 20时10分37秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int n ;
    while (cin >> n){
        int arr[35] ;
        arr[0] = 3 ;
        int index = 2 ;
        for (int i = 1 ; i <= 30 ; i ++){
            arr[i] = index + arr[i - 1] ;
            index += 2 ; 
        }
        int sum = 0 ;
        for (int i = 0 ; i < n ; i ++){
            cout << arr[i] << endl ;
            sum += arr[i] ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}
