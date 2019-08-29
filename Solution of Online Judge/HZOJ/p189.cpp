/*************************************************************************
	> File Name: p189.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月31日 星期三 17时59分39秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <map>
#include <iostream>
#include <set>

using namespace std ;

const int MAXN = 1e6 + 5 ;

int arr[MAXN] ;

int binary_search(int l , int r , int number){
    while (l < r){
        int mid = (l + r) >> 1 ;
        if (arr[mid] < number){
            l = mid + 1 ;
        }else if (arr[mid] > number){
            r = mid ;
        }else{
            return mid + 1 ;
        }
    }
    return 0 ;
}

int main(){
    int n , k ;
    scanf("%d%d" , &n , &k) ;
    for (int i = 0 ; i < n ; i ++){
        scanf("%d" , &arr[i]) ;
    }
    bool first = true ;
    while (k --){
        int number ;
        scanf("%d" , &number) ;
        int index = binary_search(0 , n , number) ;
        if (first){
            printf("%d" , index) ;
            first = false ;
        }else{
            printf(" %d" , index) ;
        }
    }
    printf("\n") ;
    return 0 ;
}
