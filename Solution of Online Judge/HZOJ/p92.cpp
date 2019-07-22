#include<stdio.h>
#define Pi 3.14

int main(){
    double r ;
    while(scanf("%lf" , &r) != EOF){
        printf("%.2lf\n%.2lf\n" , 2.0 * Pi * r , Pi * r * r) ;
    }
    return 0 ;
}
