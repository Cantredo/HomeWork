/*************************************************************************
	> File Name: p375.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 16时53分05秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

typedef struct{
    int id ;
    int chinese ;
    int math ;
    int english ;
    int tot ;
}Array ;

bool cmp(Array x , Array y){
    if (x.tot == y.tot){
        if (x.chinese == y.chinese){
            return x.id < y.id ;
        }
        return x.chinese > y.chinese ;
    }
    return x.tot > y.tot ;
}

int main(){
    int n ;
    cin >> n ;
    Array arr[305] ;
    for (int i = 0 ; i < n ; i ++){
        arr[i].id = i + 1 ;
        cin >> arr[i].chinese >> arr[i].math >> arr[i].english ;
        arr[i].tot = arr[i].chinese + arr[i].math + arr[i].english ;
    }
    sort(arr , arr + n , cmp) ;
    for (int i = 0 ; i < 5 ; i ++){
        cout << arr[i].id << " " << arr[i].tot << endl ;
    }
    return 0 ;
}
