#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char a , b ;
    while (scanf("%c" , &a) != EOF){ 
        getchar() ;
        scanf("%c" , &b) ;
        getchar() ;
        if (a == b){
            printf("TIE\n") ;
        }else if ((a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O')){
            printf("MING\n") ;
        }else{
            printf("LI\n") ;
        }
    }
    return 0 ;
}
