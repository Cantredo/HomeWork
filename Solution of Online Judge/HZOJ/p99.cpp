#include<stdio.h>
#define Pi 3.14

int main(){
    double v , a ;
    while(scanf("%lf%lf" , &v , &a) != EOF){
        printf("%.2lf\n" , (v * v) / (2 * a)) ;
    }
    return 0 ;
}
