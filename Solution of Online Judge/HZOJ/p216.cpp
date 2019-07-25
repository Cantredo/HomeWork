#include <stdio.h>
#include <unistd.h>
#include <map>
#include <iostream>
#include <set>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std ;

int main(){
    int n ;
    while (cin >> n){
        string str[n + 5] ;
        for (int i = 0 ; i < n ; i ++){
            cin >> str[i] ;
            str[i] = str[i].substr(3 , str[i].size()) ;
        }
        sort(str , str + n) ;
        for (int i = 0 ; i < n ; i ++){
            cout << str[i] << endl ;
        }
    }
    return 0 ;
}
