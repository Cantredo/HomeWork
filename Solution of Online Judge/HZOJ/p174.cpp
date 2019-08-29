/*************************************************************************
	> File Name: 174.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 16时27分01秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    string str ;
    while (getline(cin , str)){
        for (int i = 0 , len = str.size() ; i < len ; i ++){
            if (str[i] == ' '){
                cout << "%20" ;
                continue ;
            }
            cout << str[i] ;
        }
        cout << endl ;
    }
    return 0 ;
}
