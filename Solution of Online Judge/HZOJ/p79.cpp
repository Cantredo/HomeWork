/*************************************************************************
	> File Name: p79.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月08日 星期四 22时48分58秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

const int MAXN = 20000005 ;

int prime[MAXN] = {0} ;

void makePrime(){
    for (int i = 2 ; i <= MAXN ; i ++){
        if (!prime[i]) prime[++ prime[0]] = i ;
        for (int j = 1 ; j <= prime[0] ; j ++){
            if (i * prime[j] > MAXN) break ;
            prime[i * prime[j]] = 1 ;
            if (i % prime[j] == 0) break ;
        }
    }    
    return ;
}

int main(){
    makePrime() ;
    int a , b ;
    scanf("%d%d" , &a , &b) ;
    for (int i = 1 ; ; i ++){
        if (prime[i] >= a && prime[i] <= b) printf("%d\n" , prime[i]) ;
        if (prime[i] > b) break ;
    }
    return 0 ;
}
