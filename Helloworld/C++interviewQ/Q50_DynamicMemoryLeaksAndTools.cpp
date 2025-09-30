/*
Question 50: Q50_DynamicMemoryLeaksAndTools
Description: Common memory leak pitfall and RAII to avoid leaks (unique_ptr).

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q50_DynamicMemoryLeaksAndTools.cpp -O2 -Wall -o Q50_DynamicMemoryLeaksAndTools
Run: ./Q50_DynamicMemoryLeaksAndTools
*/

#include <bits/stdc++.h>
using namespace std;
struct Data {
    int* p;
    Data(){ p = new int[100]; }
    ~Data(){ delete[] p; cout<<"Freed\n"; }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    {
        Data d;
    } // RAII ensures destructor runs, preventing leak
    // Bad example commented:
    // int* q = new int[10]; // forgot delete -> leak
    cout<<"Done\n";
    return 0;
}
