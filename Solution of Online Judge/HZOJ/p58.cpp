/*************************************************************************
	> File Name: p58.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年08月23日 星期五 15时40分17秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (a > b ? a : b) 

#define Plog(frm, arg...) printf(frm , arg...) 

void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}
