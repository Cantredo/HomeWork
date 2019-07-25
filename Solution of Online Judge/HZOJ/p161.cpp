#include <stdio.h>
#include <unistd.h>
#include <map>
#include <iostream>
#include <set>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std ;

int main(){
    double x , n ;
    while (scanf("%lf%lf" , &x , &n) != EOF){
        printf("%.6lf\n" , x * pow(1.06 , n)) ;
    }
    return 0 ;
}

