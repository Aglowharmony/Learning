/*
Question 48: Q48_CustomHashInUnorderedMap
Description: Using custom hash and equality for unordered_map keys (pair).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q48_CustomHashInUnorderedMap.cpp -O2 -Wall -o Q48_CustomHashInUnorderedMap
Run: ./Q48_CustomHashInUnorderedMap
*/

#include <bits/stdc++.h>
using namespace std;
struct PairHash {
    size_t operator()(const pair<int,int>& p) const noexcept {
        return (static_cast<size_t>(p.first) << 32) ^ static_cast<unsigned int>(p.second);
    }
};
struct PairEq {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const noexcept {
        return a.first==b.first && a.second==b.second;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<pair<int,int>, string, PairHash, PairEq> mp;
    mp[{1,2}] = "one-two";
    cout<<mp[{1,2}]<<"\n";
    return 0;
}
