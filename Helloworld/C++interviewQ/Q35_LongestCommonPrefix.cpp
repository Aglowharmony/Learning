/*
Question 35: Q35_LongestCommonPrefix
Description: Find longest common prefix among strings.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q35_LongestCommonPrefix.cpp -O2 -Wall -o Q35_LongestCommonPrefix
Run: ./Q35_LongestCommonPrefix
*/

#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string a = strs.front(), b = strs.back();
    int i=0;
    while(i < (int)a.size() && i < (int)b.size() && a[i]==b[i]) ++i;
    return a.substr(0,i);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    cout<<longestCommonPrefix(s)<<"\n";
    return 0;
}
