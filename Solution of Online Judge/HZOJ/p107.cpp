#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n ;
    while(scanf("%d" , &n) != EOF){
        if (n % 7 == 0 && n % 2 != 0){
            printf("YES\n") ;
        }else{
            printf("NO\n") ;
        }
    }
    return 0 ;
}
