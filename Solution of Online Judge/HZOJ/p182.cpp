/*************************************************************************
	> File Name: p182.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 13时41分29秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int n ;
    while (cin >> n){
        int maxx = -1 ;
        for (int i = 0 ; i < n ; i ++){
            int number ;
            cin >> number ;
            maxx = max(number , maxx) ;
        }
        cout << maxx << endl ;
    }
    return 0 ;
}
