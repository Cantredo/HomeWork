#include <stdio.h>
#include <unistd.h>
#include <map>
#include <iostream>
#include <set>

using namespace std ;

int main(){
    int n ;
    while (cin >> n){
        set<int> container ;
        for (int i = 0 ; i < n ; i ++){
            int number ;
            cin >> number ;
            container.insert(number) ;
        }
        cout << container.size() << endl ;
        set<int>::iterator it ;
        for (it = container.begin() ; it != container.end() ; it ++){
            if (it == container.begin()){
                cout << *it ;
            }else{
                cout << " " << *it ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}
