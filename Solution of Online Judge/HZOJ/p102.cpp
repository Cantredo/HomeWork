#include<stdio.h>

int main(){
    double a , b , c , t ;
    while (scanf("%lf%lf%lf%lf" , &a , &b , &c , &t) != EOF){
        double up = (c - t) * a * b ;
        double down = a * c + b * c - a * b ;
        printf("%.2lf\n" , up / down) ;
    }
    return 0 ;
}
