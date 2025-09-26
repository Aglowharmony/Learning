/*
Question 01: Q01_ReverseString
Description: Reverse a string in place (handle unicode/UTF-8 not required).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q01_ReverseString.cpp -O2 -Wall -o Q01_ReverseString
Run: ./Q01_ReverseString
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Problem: reverse a given string in-place.
    string s;
    getline(cin, s);
    // Two-pointer swap
    int i = 0, j = (int)s.size() - 1;
    while (i < j) {
        swap(s[i++], s[j--]);
    }
    cout << s << "\n";
    return 0;
}
