#include<stdio.h>
#define Pi 3.14

int main(){
    int n ;
    while(scanf("%d" , &n) != EOF){
        double sum = 0 ;
        double rate = 1 + 0.00417 ;
        for(int i = 0 ; i < 6 ; i ++){
            sum = (n + sum) * rate ;
        }
        printf("$%.2lf\n" , sum) ;
    }
    return 0 ;
}
