/*
Question 38: Q38_CoinChangeWays
Description: Count ways to make change (unbounded knapsack DP).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q38_CoinChangeWays.cpp -O2 -Wall -o Q38_CoinChangeWays
Run: ./Q38_CoinChangeWays
*/

#include <bits/stdc++.h>
using namespace std;
long long waysToChange(int amount, const vector<int>& coins){
    vector<long long> dp(amount+1,0);
    dp[0]=1;
    for(int c: coins){
        for(int i=c;i<=amount;i++) dp[i] += dp[i-c];
    }
    return dp[amount];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int amount; if(!(cin>>amount)) return 0;
    int k; cin>>k; vector<int> coins(k);
    for(int i=0;i<k;i++) cin>>coins[i];
    cout<<waysToChange(amount, coins)<<"\n";
    return 0;
}
