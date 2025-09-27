/*
Question 11: Q11_SubarrayWithGivenSum_Positive
Description: Find subarray with given sum in positive integers using sliding window.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q11_SubarrayWithGivenSum_Positive.cpp -O2 -Wall -o Q11_SubarrayWithGivenSum_Positive
Run: ./Q11_SubarrayWithGivenSum_Positive
*/

#include <bits/stdc++.h>
using namespace std;
// Sliding window since all numbers are positive.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long target;
    if(!(cin>>n>>target)) return 0;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    long long sum=0;
    for(int r=0;r<n;r++){
        sum += a[r];
        while(sum>target && l<=r) sum -= a[l++];
        if(sum==target){
            cout<<l<<" "<<r<<"\n";
            return 0;
        }
    }
    cout<<"No subarray\n";
    return 0;
}
