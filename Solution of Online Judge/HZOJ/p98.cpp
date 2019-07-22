#include<stdio.h>
#define Pi 3.14

int main(){
    double r , h ;
    while(scanf("%lf%lf" , &r , &h) != EOF){
        printf("%.2lf\n%.2lf\n" , r * r * Pi , Pi * r * r * h) ;
    }
    return 0 ;
}
