/*
Question 10: Q10_RotateArray
Description: Rotate an array to the right by k steps using reversal algorithm.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q10_RotateArray.cpp -O2 -Wall -o Q10_RotateArray
Run: ./Q10_RotateArray
*/

#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& a, int k){
    int n = a.size();
    if(n==0) return;
    k %= n;
    if(k<0) k += n;
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin()+k);
    reverse(a.begin()+k, a.end());
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; if(!(cin>>n>>k)) return 0;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    rotate(a,k);
    for(int i=0;i<n;i++) cout<<a[i]<<(i+1==n?'\n':' ');
    return 0;
}
