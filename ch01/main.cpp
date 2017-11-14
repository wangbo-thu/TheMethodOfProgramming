//
// Created by wangb15 on 2017/11/13.
//

#include <iostream>
#include "ex01_01_sol2.cpp"
using namespace std;

int main()
{
    char t[] = "abcdef";
    char* s = t;
    int n = 6;
    int m = 3;
    cout << "Before Rotate:" << endl;
    StringPrint(s, n);
    LeftRotateString(s, n, m);
    cout << "After Rotate:" << endl;
    StringPrint(s, n);
}
