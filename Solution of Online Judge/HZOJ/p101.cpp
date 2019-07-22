#include<stdio.h>
#define Pi 3.14

int main(){
    int n ;
    while(scanf("%d" , &n) != EOF){
        int sum = 0 ;
        while (n > 0){
            sum += n % 10 ;
            n /= 10 ;
        }
        printf("%d\n" , sum) ;
    }
    return 0 ;
}
