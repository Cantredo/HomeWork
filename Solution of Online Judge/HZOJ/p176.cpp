/*************************************************************************
	> File Name: 176.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月07日 星期三 20时30分44秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    string str , subStr ;
    getline(cin , str) ;
    getchar() ;
    getline(cin , subStr) ;
    int cnt = 0 ;
    int index = subStr.find(subStr) ;
    cout << "index = " << index << endl ;
    while (index != -1){
        cnt ++ ;
        index = subStr.find(subStr , index + 1) ;
        cout << "index = " << index << endl ;
    }
    cout << cnt << endl ;
    return 0 ;
}
