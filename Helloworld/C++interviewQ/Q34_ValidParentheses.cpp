/*
Question 34: Q34_ValidParentheses
Description: Check valid parentheses, brackets and braces using stack.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q34_ValidParentheses.cpp -O2 -Wall -o Q34_ValidParentheses
Run: ./Q34_ValidParentheses
*/

#include <bits/stdc++.h>
using namespace std;
bool valid(const string& s){
    stack<char> st;
    for(char c: s){
        if(c=='('||c=='['||c=='{') st.push(c);
        else{
            if(st.empty()) return false;
            char t = st.top(); st.pop();
            if((c==')' && t!='(') || (c==']' && t!='[') || (c=='}' && t!='{')) return false;
        }
    }
    return st.empty();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; getline(cin,s);
    cout<<(valid(s)?"Valid\n":"Invalid\n");
    return 0;
}
