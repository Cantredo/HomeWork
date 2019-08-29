/*************************************************************************
	> File Name: 377.cpp
        > Author: Cantredo
        > Mail: aimingco@gmail.com
        > Created Time: 2019年08月09日 星期五 13时25分37秒
     ************************************************************************/

    #include <iostream>
    #include <cstring>
    #include <cmath>
    #include <stack>

    using namespace std;

int main(){
    string str ;
    cin >> str ;
    stack<char> sta_ ;
    int len = str.size() ;
    for (int i = 0 ; i < str.size() ; i ++){
        if (str[i] == '[' || str[i] == '(' || str[i] == '{'){
            sta_.push(str[i]) ;
        }else if (str[i] == ']'){
            if (!sta_.empty() && sta_.top() == '['){
                sta_.pop() ;
            }else{
                sta_.push(str[i]) ;
            }
        }else if (str[i] == ')'){
            if (!sta_.empty() && sta_.top() == '('){
                sta_.pop() ;
            }else{
                sta_.push(str[i]) ;
            }
        }else if (str[i] == '}'){
            if (!sta_.empty() && sta_.top() == '{'){
                sta_.pop() ;
            }else{
                sta_.push(str[i]) ;
            }
        }
    }
    if (sta_.size() == 0){
        cout << "YES" << endl ;   
    }else{
        cout << "NO" << endl ;
    }
    return 0 ;
}
