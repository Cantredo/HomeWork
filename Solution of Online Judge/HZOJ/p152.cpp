/*************************************************************************
	> File Name: p152.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 17时52分21秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

string str[] = {
    "Monday" , "Tuesday" , "Wednesday" ,
    "Thursday" , "Friday" , "Saturday" , "Sunday"   
} ;

int main(){
    int n ;
    while (cin >> n){
        cout << str[(n + 3) % 7] << endl ;
    }
    return 0 ;
}
