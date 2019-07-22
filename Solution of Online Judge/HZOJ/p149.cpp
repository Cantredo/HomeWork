#include <iostream>
#include <cstring>

using namespace std ;

int main(){
    string str ;
    while (getline(cin , str)){
        int len = str.size() ;
        int num = 0 ;
        for (int i = len - 1 ; i >= 0 ; i --){
            if (str[i] == ' '){
                break ;
            }
            num ++ ;
        }
        cout << num << endl ;
    }
    return 0 ;
}
