#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n ;
    while(scanf("%d" , &n) != EOF){
        int check = 0 ;
        while (n > 0){
            if (n % 10 % 2 == 0){
                check = 1 ;
            }
            n /= 10 ;
        }
        if (check){
            printf("YES\n") ;
        }else{
            printf("NO\n") ;
        }
    }
    return 0 ;
}
