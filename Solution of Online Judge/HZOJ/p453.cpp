/*************************************************************************
	> File Name: p453.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月14日 星期三 20时18分15秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 30005 ;

bool arr[MAXN] ;

int main(){
    int n , k ;
    cin >> n >> k ;
    memset(arr , false , sizeof(arr)) ;
    for (int i = 0 ; i < n ; i ++){
        int number ;
        cin >> number ;
        arr[number] = true ;
    }
    int i = 0 ;
    for (; i < MAXN ; i ++){
        if (k > 0 && arr[i]) k -- ;
        else if (k <= 0) break ;
    }
    cout << i - 1 << endl ;
    return 0 ;
}
