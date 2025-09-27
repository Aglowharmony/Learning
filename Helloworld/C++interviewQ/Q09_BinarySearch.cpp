/*
Question 09: Q09_BinarySearch
Description: Classic binary search in a sorted array, iterative and recursive.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q09_BinarySearch.cpp -O2 -Wall -o Q09_BinarySearch
Run: ./Q09_BinarySearch
*/

#include <bits/stdc++.h>
using namespace std;
int binarySearchIter(const vector<int>& a, int target){
    int l=0, r=(int)a.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(a[mid]==target) return mid;
        if(a[mid]<target) l = mid+1;
        else r = mid-1;
    }
    return -1;
}
int binarySearchRec(const vector<int>& a,int l,int r,int target){
    if(l>r) return -1;
    int m = l + (r-l)/2;
    if(a[m]==target) return m;
    if(a[m]<target) return binarySearchRec(a,m+1,r,target);
    return binarySearchRec(a,l,m-1,target);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    int t; cin>>t;
    cout<<binarySearchIter(a,t)<<"\n";
    cout<<binarySearchRec(a,0,n-1,t)<<"\n";
    return 0;
}
