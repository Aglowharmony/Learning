/*
Question 15: Q15_PascalsTriangle
Description: Generate first n rows of Pascal's Triangle.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q15_PascalsTriangle.cpp -O2 -Wall -o Q15_PascalsTriangle
Run: ./Q15_PascalsTriangle
*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int n){
    vector<vector<int>> res;
    for(int i=0;i<n;i++){
        vector<int> row(i+1,1);
        for(int j=1;j<i;j++) row[j] = res[i-1][j-1] + res[i-1][j];
        res.push_back(row);
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    auto t = generate(n);
    for(auto &r: t){
        for(int x: r) cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}
