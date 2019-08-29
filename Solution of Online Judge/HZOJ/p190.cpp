/*************************************************************************
	> File Name: 190.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月07日 星期三 19时18分36秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;

const int MAXN = 8000005 ;

int prime[MAXN] = {0} ;

void select_Prime(){
    for (int i = 2 ; i <= MAXN ; i ++){
        if (!prime[i]) prime[++ prime[0]] = i ;
        for (int j = 1 ; j <= MAXN ; j ++){
            if (i * prime[j] > MAXN) break ;
            prime[i * prime[j]] = 1 ;
            if (i % prime[j] == 0) break ; 
        }
    }    
    return ;
}

int binary_serach(int l , int r , int number){
    while (l < r){ 
        int mid = (l + r) >> 1 ; 
        if (number < prime[mid]){
            r = mid ; 
        }else if (number > prime[mid]){
            l = mid + 1 ;
        }else{
            return prime[mid] ;
        }
    }
    return -1 ;
}

int main(){
    select_Prime() ;
    int n ;
    scanf("%d" , &n) ;
    int cnt = 0 ;
    for (int i = 1 ; i <= prime[0] ; i ++){
        if (prime[i] >= n) break ;
        int index = n - prime[i] ;
        //cout << "n = " << n <<  " x = " << index << " y = " << prime[i] << endl ;
        if (index <= prime[i] && binary_serach(1 , prime[0] , index) != -1){
            cnt ++ ;
        }
    }
    printf("%d\n" , cnt) ;
    return 0 ;
}
