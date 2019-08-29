/*************************************************************************
	> File Name: 207.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 13时50分44秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

typedef struct{
    string name ;
    int math ;
    int chinese ;
    int english ;
    int geography ;
    int tot ;
}meassage ;

int main(){
    int n ;
    cin >> n ;
    meassage mea[35] ;
    int max_tot = -1 ;
    string max_name ;
    for (int i = 0 ; i < n ; i ++){
        cin >> mea[i].name >> mea[i].math >> mea[i].chinese >> mea[i].english >> mea[i].geography ;
        mea[i].tot = mea[i].math + mea[i].chinese + mea[i].english + mea[i].geography ;
        if (max_tot < mea[i].tot){
            max_tot = mea[i].tot ;
            max_name = mea[i].name ;
        }
    }
    int max_grade = -1 , min_grade = 0x3f3f3f3f ;
    for (int i = 0 ; i < n ; i ++){
        cout << mea[i].tot << endl ;
        max_grade = max(max_grade , max(mea[i].math , max(mea[i].chinese , max(mea[i].english , mea[i].geography)))) ;
        min_grade = min(min_grade , min(mea[i].math , min(mea[i].chinese ,min(mea[i].english , mea[i].geography)))) ;
    }
    cout << max_name << endl ;
    cout << max_grade << " " << min_grade << endl ; 
    return 0 ;
}
