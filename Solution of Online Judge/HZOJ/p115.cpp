#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int x , y ;
    while (scanf("%d%d" , &x , &y) != EOF){
        int tot = 0 ;
        if (x == y){
            tot = 100 ;
        }else{
            if (x % 10 == y / 10 && x / 10 == y % 10){
                tot = 20 ;
            }else if (x % 10 == y / 10 || x / 10 == y % 10 || x % 10 == y % 10 || x / 10 == y / 10){
                tot = 2 ;
            }
        }
        printf("%d\n" , tot) ;
    }
    return 0 ;
}
