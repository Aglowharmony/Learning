/*
Question 44: Q44_FactoryPattern
Description: Implement factory design pattern example.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q44_FactoryPattern.cpp -O2 -Wall -o Q44_FactoryPattern
Run: ./Q44_FactoryPattern
*/

#include <bits/stdc++.h>
using namespace std;
struct Product { virtual void info()=0; virtual ~Product()=default; };
struct ProductA: Product { void info() override { cout<<"ProductA\n"; } };
struct ProductB: Product { void info() override { cout<<"ProductB\n"; } };
struct Factory {
    static unique_ptr<Product> create(const string& type){
        if(type=="A") return make_unique<ProductA>();
        if(type=="B") return make_unique<ProductB>();
        return nullptr;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t; while(cin>>t){
        auto p = Factory::create(t);
        if(p) p->info();
        else cout<<"Unknown\n";
    }
    return 0;
}
