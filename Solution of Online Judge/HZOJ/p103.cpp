#include<stdio.h>

int main(){
    int a , b ;
    while(scanf("%d%d" , &a , &b) != EOF){
        if (a % b == 0){
            printf("YES\n") ;
        }else{
            printf("NO\n") ;
        }
    }
    return 0 ;
}
