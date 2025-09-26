/*
Question 05: Q05_RemoveDuplicatesFromSortedArray
Description: Remove duplicates in-place from a sorted array and return new length.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q05_RemoveDuplicatesFromSortedArray.cpp -O2 -Wall -o Q05_RemoveDuplicatesFromSortedArray
Run: ./Q05_RemoveDuplicatesFromSortedArray
*/

#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int write = 1;
    for (int read = 1; read < (int)nums.size(); ++read) {
        if (nums[read] != nums[read-1]) nums[write++] = nums[read];
    }
    return write;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> v(n); for(int i=0;i<n;i++) cin>>v[i];
    int len = removeDuplicates(v);
    cout<<len<<"\n";
    for(int i=0;i<len;i++) cout<<v[i]<<(i+1==len?'\n':' ');
    return 0;
}
