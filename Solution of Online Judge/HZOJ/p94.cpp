#include<stdio.h>

int main(){
    double w , h ;
    while(scanf("%lf%lf" , &w , &h) != EOF){
        printf("%.2lf\n" , w / (h * h)) ;
    }
    return 0 ;
}
