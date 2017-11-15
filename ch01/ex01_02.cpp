//
// Created by wangb15 on 2017/11/15.
//
#include <string>
#include <algorithm>
using namespace std;

/* my sol
bool StringContain(string &a, char b)
{
    bool res = false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b) {
            res = true;
            break;
        }
    }
    return res;
}

bool StringContain(string &a, string &b)
{
    bool res = true;
    for (int i = 0; i < b.size(); i++) {
        res &= StringContain(a, b[i]);
    }
    return res;
}
 */

/* sol1: 暴力轮询 O(mn)
bool StringContain(string &a, string &b)
{
    for (int i = 0; i < b.size(); i++) {
        bool tmp = false;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == b[i]) {
                tmp = true;
                break;
            }
        }
        if (tmp == false) return false;
    }
    return true;
}
 */

/* sol2: 排序后轮询
bool StringContain(string &a, string &b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    while (i < b.size() && j < a.size()) {
        if (b[i] == a[j]) i++;
        else j++;
    }
    if (j >= a.size())
        return false;
    else
        return true;
}
 */

/* my sol
bool StringContain(string &a, string &b)
{
    vector<int> hash(26);
    for (int i = 0; i < a.size(); i++) {
        hash[a[i] - 'A'] = 1;
    }
    for (int i =0; i < b.size(); i++) {
        if (hash[b[i] - 'A'] == 0)
            return false;
    }
    return true;
}
 */

bool StringContain(string & a, string &b)
{
    int hash = 0;
    for (int i = 0; i < a.size(); i++) {
        int t = 1;
        t <<= (a[i] - 'A');
        hash |= t;
    }
    for (int i = 0; i < b.size(); i++) {
        int t = 1;
        t <<= (b[i] - 'A');
        if ((hash & t) == 0)
            return false;
    }
    return true;
}