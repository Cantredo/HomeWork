/*************************************************************************
	> File Name: p380.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 14时05分52秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

typedef struct{
    int id ;
    string vote ;
}Array ;

bool cmp(Array x , Array y){
    if (x.vote.size() == y.vote.size()){
        return x.vote > y.vote ;
    }
    return x.vote.size() > y.vote.size() ;
}

int main(){
    int n ;
    cin >> n ;
    Array arr[n + 5] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i].vote ;
        arr[i].id = i + 1 ;
    }   
    sort(arr , arr + n , cmp) ;
    cout << arr[0].id << endl << arr[0].vote << endl ;
    return 0 ;
}
