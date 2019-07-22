#include<stdio.h>

int main(){
    int t ;
    while(scanf("%d" , &t) != EOF){
        printf("%d\n%d\n" , t / 10 , t % 10) ;
    }
    return 0 ;
}
