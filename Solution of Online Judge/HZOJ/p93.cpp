#include<stdio.h>

int main(){
    double c ;
    while(scanf("%lf" , &c) != EOF){
        printf("%.2lf\n" , 1.8 * c + 32) ;
    }
    return 0 ;
}
