//
// Created by wangb15 on 2017/11/13.
//

#include <iostream>
#include <string>
#include <vector>

// #include "ex01_01_sol2.cpp"
#include "ex01_02.cpp"
using namespace std;

/* ex01_01.cpp
int main()
{
    char t[] = "abcdef";
    char* s = t;
    int n =  6;
    int m = 3;
    cout << "Before Rotate:" << endl;
    StringPrint(s, n);
    LeftRotateString(s, n, m);
    cout << "After Rotate:" << endl;
    StringPrint(s, n);
}
 */

//* ex01_02.cpp 测试用例
int main()
{
    string a = "ABCD";
    vector<string> b = {"BAD", "BCE", "AA"};
    int T = 3;
    for (int i = 0; i < T; i++) {
        bool res = StringContain(a, b[i]);
        cout << res << endl;
    }

    return 0;
}
