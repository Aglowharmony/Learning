/*
Question 36: Q36_EditDistance
Description: Compute Levenshtein edit distance (DP).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q36_EditDistance.cpp -O2 -Wall -o Q36_EditDistance
Run: ./Q36_EditDistance
*/

#include <bits/stdc++.h>
using namespace std;
int editDistance(const string& a, const string& b){
    int n=a.size(), m=b.size();
    vector<int> dp(m+1);
    for(int j=0;j<=m;j++) dp[j]=j;
    for(int i=1;i<=n;i++){
        vector<int> ndp(m+1);
        ndp[0]=i;
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]) ndp[j]=dp[j-1];
            else ndp[j]=1+min({dp[j], ndp[j-1], dp[j-1]});
        }
        dp.swap(ndp);
    }
    return dp[m];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b; if(!(cin>>a>>b)) return 0;
    cout<<editDistance(a,b)<<"\n";
    return 0;
}
