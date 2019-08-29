/*************************************************************************
	> File Name: 211.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 20时36分46秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    while (cin >> n){
        string str[n + 5] ;
        for (int i = 0 ; i < n ; i ++){
            cin >> str[i] ;
            reverse(str[i].begin() , str[i].end()) ;
        }
        sort(str , str + n) ;
        for (int i = 0 ; i < n ; i ++){
            cout << str[i] << endl ;
        }
    }
    return 0 ;
}
