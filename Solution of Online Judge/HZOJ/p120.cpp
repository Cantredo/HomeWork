#include <stdio.h>
#include <math.h>
#include <string.h>

int checkyear(int y){
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
        return 1 ;
    }
    return 0 ;
}

int main(){
    int y , m , d ;
    while (scanf("%d%d%d" , &y , &m , &d) != EOF){ 
        if (y <= 0 || m <= 0 || d <= 0 || m > 12 || d > 31){
            printf("NO\n") ;
            continue ;
        }
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
            if (d > 31){
                printf("NO\n") ;
                continue ;
            }
        }else if (m == 4 || m == 6 || m == 9 || m == 11){
            if (d > 30){
                printf("NO\n") ;
                continue ;
            }
        }else{
            if (checkyear(y)){
                if (d > 29){
                    printf("NO\n") ;
                    continue ;
                }
            }else{
                if (d > 28){
                    printf("NO\n") ;
                    continue ;
                }
            }
        }
        printf("YES\n") ;
    }
    return 0 ;
}
