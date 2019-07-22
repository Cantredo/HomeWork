#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    double x ;
    while(scanf("%lf" , &x) != EOF){
        double tot = 0.0 ;
        if (x <= 15){
            tot = x * 6 ;
        }else if (x > 15){
            tot = (x - 15) * 9 + 15 * 6 ;
        }
        printf("%.2lf\n" , tot) ;
    }
    return 0 ;
}
