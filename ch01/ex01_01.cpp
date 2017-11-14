//
// Created by wangb15 on 2017/11/15.
//

#include <iostream>
using namespace std;
void StringPrint(char* s, int n)
{
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
}

void LeftShiftOne(char* s, int n)
{
    char t = s[0];
    int i = 0;
    for ( ; i + 1 < n; i++) {
        s[i] = s[i+1];
    }
    s[i] = t;
    StringPrint(s, n);
}

void LeftRotateString(char* s, int n, int m)
{
    while (m--) {
        LeftShiftOne(s, n);
    }

}