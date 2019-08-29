/*************************************************************************
	> File Name: p386.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 14时16分00秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAXN = 100005 ;

int x[MAXN] ;

typedef struct{
    int id ;
    int x ;
}Array ;

bool cmp(Array x , Array y){
    return x.x < y.x ;
}

int binary_search(int l , int r , int number , Array arr[]){
    while (l < r){
        int mid = (l + r) >> 1 ;
        if (arr[mid].x < number){
            l = mid + 1 ;
        }else if (arr[mid].x > number){
            r = mid ;
        }else{
            return mid ;
        }  
    }
    return -1 ;
}

int main(){
    int m , n ;
    cin >> m >> n ;
    Array arr[MAXN] ;
    for (int i = 0 ; i < m ; i ++){
        cin >> arr[i].x ;
        arr[i].id = i + 1 ;
    }
    sort(arr , arr + m , cmp) ;
    for (int i = 0 ; i < n ; i ++){
        int number ;
        cin >> number ;
        int index = binary_search(0 , m , number , arr) ;
        if (index == -1) cout << "0" << endl ;
        else cout << arr[index].id << endl ;
    }
    return 0 ;
}
