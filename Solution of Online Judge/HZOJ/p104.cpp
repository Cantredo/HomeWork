#include<stdio.h>

int main(){
    int a ;
    while(scanf("%d" , &a) != EOF){
        int check = 0 ;
        while (a > 0){
            if (a % 10 == 9){
                printf("YES\n") ;
                check = 1 ;
                break ;
	    }
            a /= 10 ;
        }
        if (!check){
            printf("NO\n") ;
        }
    }
    return 0 ;
}
