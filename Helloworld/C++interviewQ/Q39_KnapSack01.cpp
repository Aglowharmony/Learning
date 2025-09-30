/*
Question 39: Q39_KnapSack01
Description: 0/1 Knapsack dynamic programming (iterative).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q39_KnapSack01.cpp -O2 -Wall -o Q39_KnapSack01
Run: ./Q39_KnapSack01
*/

#include <bits/stdc++.h>
using namespace std;
int knap01(int W, const vector<int>& wt, const vector<int>& val){
    int n=wt.size();
    vector<int> dp(W+1,0);
    for(int i=0;i<n;i++){
        for(int w=W; w>=wt[i]; --w){
            dp[w] = max(dp[w], dp[w-wt[i]] + val[i]);
        }
    }
    return dp[W];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,W; if(!(cin>>n>>W)) return 0;
    vector<int> wt(n), val(n);
    for(int i=0;i<n;i++) cin>>wt[i]>>val[i];
    cout<<knap01(W, wt, val)<<"\n";
    return 0;
}
