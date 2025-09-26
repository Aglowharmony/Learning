/*
Question 03: Q03_AnagramCheck
Description: Check if two strings are anagrams using frequency counting.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q03_AnagramCheck.cpp -O2 -Wall -o Q03_AnagramCheck
Run: ./Q03_AnagramCheck
*/

#include <bits/stdc++.h>
using namespace std;

// Check anagram by frequency (handles ASCII/extended via unordered_map)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    getline(cin, a);
    getline(cin, b);
    unordered_map<char,int> freq;
    for(char c: a) if (!isspace(static_cast<unsigned char>(c))) freq[c]++;
    for(char c: b) if (!isspace(static_cast<unsigned char>(c))) {
        if (--freq[c] < 0) { cout << "Not anagram\n"; return 0; }
    }
    for(auto &p: freq) if (p.second != 0) { cout << "Not anagram\n"; return 0; }
    cout << "Anagram\n";
    return 0;
}
