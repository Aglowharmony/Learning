/*
Question 07: Q07_MergeSortedArrays
Description: Merge two sorted arrays into a single sorted array (in-place if possible).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q07_MergeSortedArrays.cpp -O2 -Wall -o Q07_MergeSortedArrays
Run: ./Q07_MergeSortedArrays
*/

#include <bits/stdc++.h>
using namespace std;
// Merge two sorted arrays into one (returns new vector).
vector<int> mergeSorted(const vector<int>& a, const vector<int>& b){
    vector<int> res; res.reserve(a.size()+b.size());
    size_t i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while(i<a.size()) res.push_back(a[i++]);
    while(j<b.size()) res.push_back(b[j++]);
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<int> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    auto res = mergeSorted(a,b);
    for(size_t i=0;i<res.size();++i) cout<<res[i]<<(i+1==res.size()?'\n':' ');
    return 0;
}
