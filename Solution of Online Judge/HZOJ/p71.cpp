/*************************************************************************
	> File Name: p71.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月27日 星期二 12时08分09秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

const int MAXN = 10005 ;

int id[MAXN] ;
int sz[MAXN] ;
int n ;

void init(){
    for (int i = 1 ; i <= n ; i ++){
        id[i] = i ;
        sz[i] = 1 ;
    }
    return ;
}

int find(int pos){
    while (pos != id[pos]) pos = id[pos] ;
    return pos ;
}

void union_(int p , int q){
    int i = find(p) ;
    int j = find(q) ;
    if (i == j) return ;
    if (sz[i] < sz[j]) id[i] = j , sz[j] += sz[i] ;
    else id[j] = i , sz[i] += sz[j] ;
    return ;
}

bool connected(int p , int q){
    return find(p) == find(q) ;
}

int main(){
    int m ;
    scanf("%d%d" , &n , &m) ;
    init() ;
    for (int i = 0 ; i < m ; i ++){
        int a , b , c ;
        scanf("%d%d%d" , &a , &b , &c) ;
        if (a == 1){
            union_(b , c) ;
        }else{
            if (connected(b , c)) printf("Yes\n") ;
            else printf("No\n") ;
        }
    }
    return 0 ;
}
