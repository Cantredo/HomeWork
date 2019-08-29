/*************************************************************************
	> File Name: 191.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月02日 星期五 15时58分35秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

const int MAXN = 8000000 ;

int prime[MAXN] = {0} ;

void solve(){
    for (int i = 2 ; i < MAXN ; i ++){
        if (!prime[i]) prime[++ prime[0]] = i ;
        for (int j = 1 ; j <= prime[0] ; j ++){
            if (prime[j] * i >= MAXN) break ;
            prime[prime[j] * i] = 1 ;
            if (i % prime[j] == 0) break ;
        }
    }
    /*    
    for (int i = 0 ; i < 10 ; i ++){
        if (!prime[i])
            cout << i << endl ;
    }
    */
    return ;
}

int main(){
    int l , r ;
    cin >> l >> r ;
    solve() ;
    int minn = 0x3f3f3f3f , maxx = -1 ;
    int clo_l , clo_r , dis_l , dis_r ;
    clo_l = clo_r = dis_l = dis_r = -1 ;
    bool flag1 , flag2 ;
    flag1 = flag2 = false ;
    int index = 0 ;
    for (int i = 1 ; i <= prime[0] ; i ++){
        if (prime[i] >= l && prime[i] <= r){
            index = i ;
            break ;
        }
    }
    for (int i = l ; i < r ; i ++){
        int len = prime[index + 1] - prime[index] ;
        if (prime[index + 1] > r) break ;
        if (minn > len){
            minn = len ;
            clo_l = prime[index] ;
            clo_r = prime[index + 1] ;
            flag1 = true ;
        }
        if (maxx < len){
            maxx = len ;
            dis_l = prime[index] ;
            dis_r = prime[index + 1] ;
            flag2 = true ;
        }
        index ++ ;
    }
    if (flag1 && flag2){
        printf("%d,%d are closest, %d,%d are most distant.\n" , clo_l , clo_r , dis_l , dis_r) ;
    }else if (flag1 && !flag2){
        dis_l = clo_l ;
        dis_r = clo_r ;
        printf("%d,%d are closest, %d,%d are most distant.\n" , clo_l , clo_r , dis_l , dis_r) ;
    }else if (!flag1 && flag2){
        clo_l = dis_l ;
        clo_r = dis_r ;
        printf("%d,%d are closest, %d,%d are most distant.\n" , clo_l , clo_r , dis_l , dis_r) ;
    }else{
        printf("There are no adjacent primes.\n") ;
    }
    return 0 ;
}
