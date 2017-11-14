//
// Created by wangb15 on 2017/11/15.
//
// 三步反转法实现移位
#include <iostream>
using namespace std;

void StringPrint(char* s, int n)
{
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
}

void ReverseString(char* s, int from, int to)
{
    int tmp = 0;
    while (from < to) {
        tmp = s[from];
        s[from++] = s[to];
        s[to--] = tmp;
    }
}

void LeftRotateString(char* s, int n, int m)
{
    m %= n;
    ReverseString(s, 0, m - 1);
    StringPrint(s, n);
    ReverseString(s, m, n - 1);
    StringPrint(s, n);
    ReverseString(s, 0, n - 1);
    StringPrint(s, n);
}