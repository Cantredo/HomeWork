/*************************************************************************
	> File Name: 142.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 19时35分03秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 100005 ;
int prime[MAXN] = {0} ;

void solveWay(){
    for (int i = 2 ; i < MAXN ; i ++){
        for (int j = 1 ; j <= prime[0] ; j ++){
            if (i * prime[j] >= MAXN) break ;
            prime[prime[j] * i] = 1 ;
            if (i % prime[j] == 0) break ;
        } 
    }
    return ;
}

bool check(int number){
    int temp = number , sum = 0 ;
    while (number > 0){
        sum = sum * 10 + number % 10 ;
        number /= 10 ;
    }
    return temp == sum ;
}

int main(){
    solveWay() ;
    int a , b ;
    cin >> a >> b ;
    for (int i = a ; i <= b ; i ++){
        if (check(i) && !prime[i]){
            cout << i << " " ;
        }
    }
    cout << endl ;
    return 0 ;
}
