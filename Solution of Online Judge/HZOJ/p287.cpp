/*************************************************************************
	> File Name: p287.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月09日 星期五 16时24分31秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <queue>
#include <algorithm>
#include <cstdio>
#define ll long long

using namespace std;

const int MAXN = 10005 ;

int main(){
    int n ;
    cin >> n ;
    int arr[MAXN] ;
    priority_queue<int , vector<int> , greater<int> > pque_ ;
    for (int i = 0 ; i < n ; i ++){
        int number ;
        scanf("%d" , &number) ;
        pque_.push(number) ;  
    }
    int sum = 0 ;
    while (pque_.size() != 1){
        int num = pque_.top() ;
        pque_.pop() ;
        num += pque_.top() ;
        pque_.pop() ;
        pque_.push(num) ;
        sum += num ;
    }
    printf("%d\n" , sum) ;
    return 0 ;
}

