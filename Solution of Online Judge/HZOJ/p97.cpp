#include<stdio.h>

int main(){
    long long n ;
    while(scanf("%lld" , &n) != EOF){
        printf("%lld\n" , n * (1 + n) / 2) ;
    }
    return 0 ;
}
