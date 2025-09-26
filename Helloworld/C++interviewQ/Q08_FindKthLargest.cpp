/*
Question 08: Q08_FindKthLargest
Description: Find k-th largest element using quickselect.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q08_FindKthLargest.cpp -O2 -Wall -o Q08_FindKthLargest
Run: ./Q08_FindKthLargest
*/

#include <bits/stdc++.h>
using namespace std;
// Quickselect (average O(n)) to find k-th largest (1-based k).
int partition(vector<int>& a, int l, int r){
    int pivot = a[r];
    int i = l;
    for(int j=l;j<r;++j){
        if(a[j] >= pivot) swap(a[i++], a[j]); // for k-th largest: larger elements left
    }
    swap(a[i], a[r]);
    return i;
}
int quickselect(vector<int>& a, int l, int r, int k){
    if(l==r) return a[l];
    int p = partition(a,l,r);
    int leftCount = p - l + 1;
    if(k==leftCount) return a[p];
    if(k < leftCount) return quickselect(a,l,p-1,k);
    else return quickselect(a,p+1,r,k-leftCount);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; if(!(cin>>n>>k)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<quickselect(a,0,n-1,k)<<"\n";
    return 0;
}
