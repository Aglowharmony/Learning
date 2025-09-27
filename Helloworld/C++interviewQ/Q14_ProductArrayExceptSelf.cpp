/*
Question 14: Q14_ProductArrayExceptSelf
Description: Return product of array except self without division.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q14_ProductArrayExceptSelf.cpp -O2 -Wall -o Q14_ProductArrayExceptSelf
Run: ./Q14_ProductArrayExceptSelf
*/

#include <bits/stdc++.h>
using namespace std;
vector<long long> productExceptSelf(const vector<int>& a){
    int n = a.size();
    vector<long long> left(n,1), right(n,1), ans(n);
    for(int i=1;i<n;i++) left[i] = left[i-1]*a[i-1];
    for(int i=n-2;i>=0;i--) right[i] = right[i+1]*a[i+1];
    for(int i=0;i<n;i++) ans[i] = left[i]*right[i];
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    auto res = productExceptSelf(a);
    for(int i=0;i<n;i++) cout<<res[i]<<(i+1==n?'\n':' ');
    return 0;
}
