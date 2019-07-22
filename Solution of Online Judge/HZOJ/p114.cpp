#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char x ;
    while (scanf("%c" , &x) != EOF){
        getchar() ;
        switch (x){
            case 'h':
                printf("He\n") ;
                break ;
            case 'l':
                printf("Li\n") ;
                break ;
            case 'c':
                printf("Cao\n") ;
                break ;
            case 'd':
                printf("Duan\n") ;
                break ;
            case 'w':
                printf("Wang\n") ;
                break ;
            default :
                printf("Not Here\n") ;
                break ;
        }
    }
    return 0 ;
}
