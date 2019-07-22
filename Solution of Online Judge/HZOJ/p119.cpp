#include <stdio.h>
#include <math.h>
#include <string.h>

int checkyear(int y){
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
        return 1 ;
    }
    return 0 ;
}

int main(){
    int y , m , d ;
    while (scanf("%d%d%d" , &y , &m , &d) != EOF){ 
        int front_y = y , front_m = m , front_d = d ;
        int later_y = y , later_m = m , later_d = d ;
        if (d == 31){
            if (m != 12){
                front_d -= 1 ;
                later_d = 1 ;
                later_m += 1 ;
            }else{
                front_d -= 1 ;
                later_d = 1 ;
                later_m = 1 ;
                later_y += 1 ;
            }
        }else if (d == 30){
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                front_d -= 1 ;
                later_d += 1 ;
            }else if (m == 4 || m == 6 || m == 9 || m == 11){
                front_d -= 1 ;
                later_d = 1 ;
                later_m += 1 ;
            }
        }else if (d == 28){   
            if (m != 2 || (m == 2 && checkyear(y))){
                front_d -= 1 ;
                later_d += 1 ;
            }else if (m == 2 && !checkyear(y)){
                front_d -= 1 ;
                later_d = 1 ;
                later_m += 1 ;
            }
        }else if (d == 29){
            if (m == 2){
                front_d -= 1 ;
                later_d = 1 ;
                later_m += 1 ;
            }else{
                front_d -= 1 ;
                later_d += 1 ;
            }
        }else if (d == 1){
            if (m == 1){
                front_d = 31 ;
                later_d += 1 ;
                front_m = 12 ;
                front_y -= 1 ;
            }else{
                if (m == 2){
                    if (checkyear(y)){
                        front_d = 29 ;
                        later_d += 1 ;
                    }else{
                        front_d = 28 ;
                        later_d += 1 ;
                    }
                }else if (m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                    front_d = 31 ;
                    later_d += 1 ;
                }else if (m == 3){
                    if (checkyear(y)){
                        front_d = 29 ;
                    }else{
                        front_d = 28 ;
                    }
                    later_d += 1 ;
                }else{
                    front_d = 30 ;
                    later_d += 1 ;
                }
                front_m -= 1 ;
            }
        }else{
            front_d -= 1 ;
            later_d += 1 ;
        }
        printf("%d %d %d\n" , front_y , front_m , front_d) ;
        printf("%d %d %d\n" , later_y , later_m , later_d) ;
    }
    return 0 ;
}
