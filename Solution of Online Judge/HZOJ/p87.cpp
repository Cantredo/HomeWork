#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    double a , b ;
    while (scanf("%lf%lf" , &a , &b) != EOF){
        printf("%.2lf\n" , 2 * (a + b)) ;
        printf("%.2lf\n" , a * b) ;
    }
    return 0 ;
}
