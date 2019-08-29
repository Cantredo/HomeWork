/*************************************************************************
	> File Name: 199.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月02日 星期五 19时33分04秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 1e5 + 5 ;

int a[10] ;
int func[MAXN] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9} ;

int calc(int x){
    return a[1] * func[x - 1] + a[2] * func[x - 2] + a[3] * func[x - 3] + 
           a[4] * func[x - 4] + a[5] * func[x - 5] + a[6] * func[x - 6] +
           a[7] * func[x - 7] + a[8] * func[x - 8] + a[9] * func[x - 9] +
           a[10] * func[x - 10] ;
}

int main(){
    int k , m ;
    cin >> k >> m ;
    for (int i = 1 ; i <= 10 ; i ++){
        cin >> a[i] ;
    }
    for (int i = 10 ; i <= k ; i ++){
        func[i] = calc(i) % m ;
    }
    cout << func[k] << endl ;        
    return 0 ;
}
