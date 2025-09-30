/*
Question 49: Q49_STLAlgorithmsExample
Description: Use of common STL algorithms: transform, accumulate, partition, sort, nth_element.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q49_STLAlgorithmsExample.cpp -O2 -Wall -o Q49_STLAlgorithmsExample
Run: ./Q49_STLAlgorithmsExample
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a = {5,2,9,1,5,6};
    transform(a.begin(), a.end(), a.begin(), [](int x){ return x*2; });
    cout<<"Transformed: "; for(int v:a) cout<<v<<" "; cout<<"\n";
    sort(a.begin(), a.end());
    cout<<"Sorted: "; for(int v:a) cout<<v<<" "; cout<<"\n";
    int k=3;
    nth_element(a.begin(), a.begin()+k-1, a.end());
    cout<<"3rd smallest: "<<a[k-1]<<"\n";
    int sum = accumulate(a.begin(), a.end(), 0);
    cout<<"Sum: "<<sum<<"\n";
    return 0;
}
