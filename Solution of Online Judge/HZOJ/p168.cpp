#include <iostream>  
#include <string>  
#include <algorithm>

using namespace std;  
  
int main(){  
    int n ;
    while (cin >> n){
        string str[105] ;
        for (int i = 0 ; i < n ; i ++){
            cin >> str[i] ;
            transform(str[i].begin() , str[i].end() , str[i].begin() , ::tolower) ;
            str[i][0] = toupper(str[i][0]) ;
        }
        sort(str , str + n) ;
        for (int i = 0 ; i < n ; i ++){
            cout << str[i] << endl ;
        }
    }
    return 0 ;
}  
