/*************************************************************************
	> File Name: p454.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月14日 星期三 20时29分49秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <set>

using namespace std;

int main(){
    int n ;
    cin >> n ;
    set<int> container ;
    for (int i = 0 ; i < n ; i ++){
        int number ;
        cin >> number ;
        container.insert(number) ;
    }
    set<int>::iterator it ;
    cout << container.size() << endl ;
    for (it = container.begin() ; it != container.end() ; it ++){
        if (it == container.begin()) cout << *it ;
        else cout << " " << *it ;
    }
    cout << endl ;
    return 0 ;
}
