/*************************************************************************
	> File Name: 156.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月04日 星期日 17时26分11秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool check(int number){
    int crt1 = floor(sqrt(number)) ;
    int crt2 = ceil(sqrt(number)) ;
    return crt1 == crt2 ;
}

bool is_prime(int number){
    for (int i = 2 ; i <= sqrt(number) ; i ++){
        if (number % i == 0) return false ;
    }
    return true ;
}


int main(){
    int a , b ;
    cin >> a >> b ;
    bool first = true ;
    int cnt = 0 ;
    for (int i = a ; i <= b ; i ++){
        if (check(i / 100) && check(i % 100) && is_prime(i)){
            if (first) cout << i , first = false ;
            else cout << " " << i ;
            cnt ++ ;
        }
    }
    cout << endl << cnt << endl ;
    return 0 ;
}
