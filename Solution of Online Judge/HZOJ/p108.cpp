#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char ch ;
    while(scanf("%c" , &ch) != EOF){
        double m , n ;
        scanf("%lf%lf" , &m , &n) ;
        if (ch == 'r'){
            printf("%.2lf\n" , m * n) ;
        }else if (ch == 't'){
            printf("%.2lf\n" , 0.5 * m * n) ;
        }
    }
    return 0 ;
}
