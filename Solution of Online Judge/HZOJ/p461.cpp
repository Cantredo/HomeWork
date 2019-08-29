/*************************************************************************
	> File Name: p461.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 20时39分12秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    int cnt = 0 , index = 0 ;
    for (int i = 0 ; i < n ; i ++){
        char ch ;
        cin >> ch ;
        if (ch == 'C'){
            string str ;
            cin >> str ;
            cnt ++ ;
        }else{
            int grade ;
            cin >> grade ;
            index += grade ;
        }
    }
    cout << cnt << " " << index / (n - cnt) << endl ;
    return 0 ;
}
