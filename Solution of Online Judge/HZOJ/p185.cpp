#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>

using namespace std ;

int main(){
    int n ;
    int arr[35] ;
    arr[1] = 1 ;
    arr[2] = 1 ;
    for (int i = 3 ; i <= 30 ; i ++){
        arr[i] = arr[i - 1] + arr[i - 2] ;
    }
    while (cin >> n){
        cout << arr[n] << endl ;
    }
    return 0 ;
}
