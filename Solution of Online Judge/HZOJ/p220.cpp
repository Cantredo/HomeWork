/*************************************************************************
	> File Name: 220.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月05日 星期一 15时38分28秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

typedef struct{
    string name ;
    int chinese ;
    int math ;
    int english ;
    int sience ;
    int tot ;
}meassage ;

bool cmp_chinese(meassage x , meassage y){
    if (x.chinese == y.chinese){
        return x.name < y.name ;
    }
    return x.chinese > y.chinese ;
}

bool cmp_math(meassage x , meassage y){
    if (x.math == y.math){
        return x.name < y.name ;
    }
    return x.math > y.math ;
}

bool cmp_english(meassage x , meassage y){
    if (x.english == y.english){
        return x.name < y.name ;
    }
    return x.english > y.english ;
}

bool cmp_sience(meassage x , meassage y){
    if (x.sience == y.sience){
        return x.name < y.name ;
    }
    return x.sience > y.sience ;
}

bool cmp_tot(meassage x , meassage y){
    if (x.tot == y.tot){
        return x.name < y.name ;
    }
    return x.tot > y.tot ;
}

void output(meassage mea[]){
    for (int i = 0 ; i < 4 ; i ++){
        i && cout << " " ;
        cout << mea[i].name ;
    }
    cout << endl ;
    return ;
}

int main(){
    int n ;
    cin >> n ;
    meassage mea[105] ;
    for (int i = 0 ; i < n ; i ++){
        cin >> mea[i].name >> mea[i].chinese >> mea[i].math >> mea[i].english >> mea[i].sience ;
        mea[i].tot = mea[i].chinese + mea[i].math + mea[i].english + mea[i].sience ;
    }
    sort(mea , mea + n , cmp_chinese) ;
    output(mea) ;
    sort(mea , mea + n , cmp_math) ;
    output(mea) ;
    sort(mea , mea + n , cmp_english) ;
    output(mea) ;
    sort(mea , mea + n , cmp_sience) ;
    output(mea) ;
    sort(mea , mea + n , cmp_tot) ;
    output(mea) ;
    return 0 ;
}
