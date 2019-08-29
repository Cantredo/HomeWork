/*************************************************************************
	> File Name: p458.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月19日 星期一 19时21分40秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

typedef struct{
    string name , sex ;
    int year , month ;
}Array ;

Array arr[105] ;

bool cmp(Array x , Array y){
    if (x.year == y.year){
        return x.month > y.month ;
    }
    return x.year > y.year ;
}

int main(){
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i].name >> arr[i].sex >> arr[i].year >> arr[i].month ;
    }
    sort(arr , arr + n , cmp) ;
    for (int i = 0 ; i < n ; i ++){
        cout << arr[i].name << " " << arr[i].sex << " " << arr[i].year << " " << arr[i].month << endl ;
    }
    return 0 ;
}
