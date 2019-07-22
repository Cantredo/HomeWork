#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char str[10] ;
    while(scanf("%s" , str) != EOF){
        int len = strlen(str) ;
        int j = -1 ;
        for (int i = len ; i >= 0 ; i --){
            if (str[i] > '0' && str[i] <= '9'){
                j = i ;
                break ;
            }
        }
        for (int i = 0 ; i < len ; i ++){
            if (str[i] == '-'){
                continue ;
            }else{
                printf("%c" , str[i]) ;
                if (i == j){
                    break ;
                }
            }
        }
        puts("") ;
    }
    return 0 ;
}
