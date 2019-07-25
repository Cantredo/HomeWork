#include <stdio.h>
#include <unistd.h>
#include <map>
#include <iostream>
#include <set>
#include <cstring>
#include <cmath>

using namespace std ;

int main(){
    int x , n ;
    while (cin >> x >> n){
        cout << int(x * pow((1 + 0.06) , n)) << endl ;
    }
    return 0 ;
}
