#include <stdio.h>
#include <math.h>
#include <string.h>

int days(int month , int check){
    int sum = 0 ;
    switch (month){
        case 1:
            sum += 31 ;
            break ;
        case 2:
            sum += 28 ;
            break ;
        case 3:
            sum += 31 ;
            break ;
        case 4:
            sum += 30 ;
            break ;
        case 5:
            sum += 31 ;
            break ;
        case 6:
            sum += 30 ;
            break ;
        case 7:
            sum += 31 ;
            break ;
        case 8:
            sum += 31 ;
            break ;
        case 9:
            sum += 30 ;
            break ;
        case 10:
            sum += 31 ;
            break ;
        case 11:
            sum += 30 ;
            break ;
        case 12:
            sum += 31 ;
            break ;
    }
    if (month == 2){
        sum += check ;
    }
    return sum ;
}

int main(){
    int y , m ;
    while (scanf("%d%d" , &y , &m) != EOF){
        int check = 0 ;
        if (y % 400 == 0 || (y % 4 == 0 & y % 100 != 0)){
            check = 1 ;
        }
        printf("%d\n" ,days(m , check)) ;
    }
    return 0 ;
}
