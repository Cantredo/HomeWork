#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char ch ;
    while (scanf("%c" , &ch) != EOF){
        if (ch == 'a'){
            printf("It is good\n") ;
        }else if (ch == 'b'){
            printf("OMG\n") ;
        }else if (ch == 'c'){
            printf("Yes!\n") ;
        }
    }
    return 0 ;
}
