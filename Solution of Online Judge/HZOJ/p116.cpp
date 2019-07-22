#include <stdio.h>
#include <math.h>
#include <string.h>

int min(int a , int b){
    return a < b ? a : b ;
}

int max(int a , int b){
    return a < b ? b : a ;
}

int check(int a , int b , int c){
    if (a + b > c){
        return 1 ;
    }
    return 0 ;
}

int main(){
    int a , b , c ;
    while (scanf("%d%d%d" , &a , &b , &c) != EOF){
        int x , y , z ;
	    x = min(a , min(b , c)) ;
	    y = max(a , max(b , c)) ;
        if (x == a){
            if (y == b){
                z = c ;
            }else{
                z = b ;
            }
        }else if (x == b){
            if (y == a){
                z = c ;
            }else{
                z = a ;
            }
        }else if (x == c){
            if (y == a){
                z = b ;
            }else{
                z = a ;
            }
        }
        if (check(x , z , y)){
            if (x * x + z * z > y * y){
                printf("acute triangle\n") ;
            }else if (x * x + z * z == y * y){
                printf("right triangle\n") ;
            }else if (x * x + z * z < y * y){
                printf("obtuse triangle\n") ;
            }
        }else{
            printf("illegal triangle\n")  ;
        }
    }
    return 0 ;
}
