#include<stdio.h>

int main(){
    double h ;
    while(scanf("%lf" , &h) != EOF){
        if (h > 55.4){
            printf("YES\n") ;
        }else{
            printf("NO\n") ;
        }
    }
    return 0 ;
}
