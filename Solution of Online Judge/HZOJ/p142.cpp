#include <stdio.h>
#include <unistd.h>
#include <map>
#include <iostream>
#include <set>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std ;

const int MAXN = 100005 ;

bool ans[MAXN] ;

bool is_prime(int number){
    for (int i = 2 ; i <= sqrt(number) ; i ++){
        if (number % i == 0){
            return false ;
        }
    }
    return true ;
}

bool is_roudnum(int number){
    int temp = 0 ;
    int x = number ;
    while (x > 0){
        temp = temp * 10 + x % 10 ;
        x /= 10 ;
    }
    if (number == temp){
        return true ;
    }else{
        return false ;
    }
}

void init(){
    memset(ans , false , sizeof(ans)) ;
    for (int i = 10000 ; i < 100000 ; i ++){
        if (is_roudnum(i) && is_prime(i)){
            ans[i] = true ;
        }
    }
    return ;
}

int main(){
    int a , b ;
    init() ;
    while (cin >> a >> b){
        bool first = true ;
        for (int i = a ; i <= b ; i ++){
            if (ans[i]){
                if (first) {cout << i ; first = false ;}
                else cout << " " << i ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}
