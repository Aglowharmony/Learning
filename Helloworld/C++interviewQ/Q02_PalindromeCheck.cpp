/*
Question 02: Q02_PalindromeCheck
Description: Check if a string is palindrome ignoring non-alphanumerics and case.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q02_PalindromeCheck.cpp -O2 -Wall -o Q02_PalindromeCheck
Run: ./Q02_PalindromeCheck
*/

#include <bits/stdc++.h>
using namespace std;

static bool isAlnum(char c) {
    return isalnum(static_cast<unsigned char>(c));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    string filtered;
    for (char c : s) {
        if (isAlnum(c)) filtered.push_back(tolower(static_cast<unsigned char>(c)));
    }
    int L = 0, R = (int)filtered.size() - 1;
    bool ok = true;
    while (L < R) {
        if (filtered[L++] != filtered[R--]) { ok = false; break; }
    }
    cout << (ok ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}
