/*************************************************************************
	> File Name: 154.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月02日 星期五 20时06分23秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int n ;
    while (cin >> n){
        for (int i = n ; i > 0 ; i --){
            for (int j = i ; j > 0 ; j --){
                j != i && cout << " " ; 
                cout << j ;
            }
            cout << endl ;
        }
    }
    return 0 ;
}
