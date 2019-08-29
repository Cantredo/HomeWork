/*************************************************************************
	> File Name: p462.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月12日 星期一 16时27分01秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const int MAXN = 10005 ;

typedef struct{
    char ch ;
    int qq_number ;
    string id ;
}Array ;

Array arr[MAXN] ;

int main(){
    int n ;
    cin >> n ;
    long long average = 0 ;
    int qq_time , girl , boy ;
    qq_time = girl = boy = 0 ;
    for (int i = 0 ; i < n ; i ++){
        cin >> arr[i].ch ;
        if (arr[i].ch == 'q'){
            cin >> arr[i].qq_number ;
            average += arr[i].qq_number ;
            qq_time ++ ;
        }else{
            cin >> arr[i].id ;
            int len = arr[i].id.size() ;
            if ((arr[i].id[len - 2] - '0') & 1) boy ++ ;
            else girl ++ ;
        }
    }
    if (qq_time == 0){
        cout << boy << " " << girl << " " << 0 << endl ;
    }else{
        cout << boy << " " << girl << " " << average / qq_time << endl ;
    }
    return 0 ;
}

/*
    
    
    
    
    
*/
