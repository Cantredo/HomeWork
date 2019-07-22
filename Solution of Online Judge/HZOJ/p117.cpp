#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int a ;
    while (scanf("%d" , &a) != EOF){
        int arr[10] ;
        int x = a , index = 0;
        while (x > 0){
            arr[index ++] = x % 10 ;
            x /= 10 ;
        }
        int check = 1 ;
        for (int i = 0 ; i < index / 2 ; i ++){
            if (arr[i] != arr[index - i - 1]){
                check = 0 ;
                break ;
            }
        }
        if (check){
            printf("YES\n") ;
        }else{
            printf("NO\n") ;
        }
    }
    return 0 ;
}
