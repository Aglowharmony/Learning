/*
Question 40: Q40_CatalanNumbers
Description: Generate Catalan numbers using DP and combinatorics.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q40_CatalanNumbers.cpp -O2 -Wall -o Q40_CatalanNumbers
Run: ./Q40_CatalanNumbers
*/

#include <bits/stdc++.h>
using namespace std;
vector<long long> catalan(int n){
    vector<long long> C(n+1,0);
    C[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) C[i] += C[j]*C[i-1-j];
    }
    return C;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    auto c = catalan(n);
    for(int i=0;i<=n;i++) cout<<c[i]<<(i==n?'\n':' ');
    return 0;
}
