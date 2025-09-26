/*
Question 04: Q04_FindDuplicateInArray
Description: Find a duplicate number in an array of n+1 integers where each integer is in [1, n]. Use Floyd's cycle detection.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q04_FindDuplicateInArray.cpp -O2 -Wall -o Q04_FindDuplicateInArray
Run: ./Q04_FindDuplicateInArray
*/

#include <bits/stdc++.h>
using namespace std;
// Uses Floyd's Tortoise and Hare cycle detection to find duplicate in array
int findDuplicate(const vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<findDuplicate(a)<<"\n";
    return 0;
}
