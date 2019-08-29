/*************************************************************************
	> File Name: p56.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 15时56分13秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int x , y ;
    cin >> x >> y ;
    int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9} ;
    int time = y ;
    do{
        time -- ;
    }while (time && next_permutation(arr , arr + x) != -1) ;
    for (int i = 0 ; i < x ; i ++){
        cout << arr[i] ;
    }
    cout << endl ;
    return 0 ;
}
