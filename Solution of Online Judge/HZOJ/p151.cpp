/*************************************************************************
	> File Name: p151.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月29日 星期一 18时16分13秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int checkWin(char a , char b){
    if ((a == 'Y' && b == 'H') || (a == 'O' && b == 'Y') || (a == 'H' && b == 'O')){
        return 1 ;
    }else if (a == b){
        return 0 ;
    }
    return -1 ;
}

int main(){
    char Ming_left , Ming_right ;
    char Hua_left ,  Hua_right ;
    while (cin >> Ming_left >> Ming_right >> Hua_left >> Hua_right){
        int flag_all = checkWin(Ming_left , Hua_left) ;
        if (flag_all == 1){
            int flag_cur = checkWin(Ming_left , Hua_right) ;
            if (flag_cur == 1 || flag_cur == 0){
                cout << "MING" << endl ;
            }else{
                int flag_curr = checkWin(Ming_right , Hua_right) ;
                if (flag_curr == 1){
                    cout << "MING" << endl ;
                }else{
                    cout << "LIHUA" << endl ;
                }
            }
        }else if (flag_all == 0){
            int flag_cur = checkWin(Ming_right , Hua_right) ;
            if (flag_cur == 1){
                cout << "MING" << endl ;
            }else if (flag_cur == 0){
                cout << "TIE" << endl ;
            }else{
                cout << "LIHUA" << endl ;
            }
        }else{
            int flag_cur = checkWin(Ming_right , Hua_left) ;
            if (flag_cur == -1 || flag_cur == 0){
                cout << "LIHUA" << endl ;
            }else{
                int flag_curr = checkWin(Ming_right , Hua_right) ;
                if (flag_curr == 1 || flag_curr == 0){
                    cout << "MING" << endl ;
                }else{
                    cout << "LIHUA" << endl ;
                }
            }
        }
    }
    return 0 ;
}
