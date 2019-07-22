#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n ;
    while (scanf("%d" , &n) != EOF){
        double tot = 0.0 ;
        if (n <= 3){
            printf("14\n") ;
        }else{
            tot = 13 + (n - 3) * 2.3 + 1 ;
            printf("%.1lf\n" , tot) ;
        }
    }
    return 0 ;
}
