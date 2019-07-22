#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int y ;
    while (scanf("%d" , &y) != EOF){
        if (y >= 1900){
            switch ((y - 1900) % 12){
                case 0:
                    printf("rat\n") ;
                    break ;
                case 1:
                    printf("ox\n") ;
                    break ;
                case 2:
                    printf("tiger\n") ;
                    break ;
                case 3:
                    printf("rabbit\n") ;
                    break ;
                case 4:
                    printf("dragon\n") ;
                    break ;
                case 5:
                    printf("snake\n") ;
                    break ;
                case 6:
                    printf("horse\n") ;
                    break ;
                case 7:
                    printf("sheep\n") ;
                    break ;
                case 8:
                    printf("monkey\n") ;
                    break ;
                case 9:
                    printf("rooster\n") ;
                    break ;
                case 10:
                    printf("dog\n") ;
                    break ;
                case 11:
                    printf("pig\n") ;
                    break ;
            } 
        }else{
            switch ((1899 - y) % 12){
                case 11:
                    printf("rat\n") ;
                    break ;
                case 10:
                    printf("ox\n") ;
                    break ;
                case 9:
                    printf("tiger\n") ;
                    break ;
                case 8:
                    printf("rabbit\n") ;
                    break ;
                case 7:
                    printf("dragon\n") ;
                    break ;
                case 6:
                    printf("snake\n") ;
                    break ;
                case 5:
                    printf("horse\n") ;
                    break ;
                case 4:
                    printf("sheep\n") ;
                    break ;
                case 3:
                    printf("monkey\n") ;
                    break ;
                case 2:
                    printf("rooster\n") ;
                    break ;
                case 1:
                    printf("dog\n") ;
                    break ;
                case 0:
                    printf("pig\n") ;
        }
    }
}
    return 0 ;
}
