/*************************************************************************
	> File Name: p195.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月07日 星期三 15时28分05秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

const int MAXN = 1e5 + 5 ;

int id[MAXN] ;

int main(){
    int n , m ;
    scanf("%d%d" , &n , &m) ;
    for (int i = 0 ; i < n ; i ++){
        scanf("%d" , &id[i]) ;
    }
    for (int i = 0 ; i < m ; i ++){
        int number ;
        scanf("%d" , &number) ;
        int l = 0 , r = n - 1 ;
        while (l != r){
            int mid = (l + r + 1) >> 1 ;
            if (id[mid] <= number) l = mid ;
            else r = mid - 1 ;
        }
        i && printf(" ") ;
        printf("%d" , id[l]) ;
    }
    return 0 ;
}

/*
找到最后一个小于等于number的数所在的下标
int binary_search(int *arr , int l , int r , int x){
    int head = l , tail = r - 1 ;
    while (head != tail){
        mid = (head + tail + 1) >> 1 ;
        if (arr[mid] <= x) head = mid ;
        else tail = mid - 1 ;
    }
    return head ;
}

找到第一个大于等于number的数所在的下标
int binary_search(int *arr , int l , int r , int x){
    int head = l , tail = r - 1 ;
    while (head != tail){
        mid = (head + tail) >> 1 ;
        if (arr[mid] <= x) head = mid + 1 ;
        else tail = mid ;
    }
    return head ;
}
*/
