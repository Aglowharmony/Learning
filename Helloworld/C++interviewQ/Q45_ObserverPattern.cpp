/*
Question 45: Q45_ObserverPattern
Description: Observer pattern example with subject/observer.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q45_ObserverPattern.cpp -O2 -Wall -o Q45_ObserverPattern
Run: ./Q45_ObserverPattern
*/

#include <bits/stdc++.h>
using namespace std;
class Observer { public: virtual void update(int)=0; virtual ~Observer()=default; };
class Subject {
    vector<Observer*> obs;
    int state=0;
public:
    void attach(Observer* o){ obs.push_back(o); }
    void setState(int s){ state=s; notify(); }
    void notify(){ for(auto o: obs) o->update(state); }
};
class ConcreteObserver: public Observer {
    string name;
public:
    ConcreteObserver(string n): name(n) {}
    void update(int v) override { cout<<name<<\" updated to \"<<v<<\"\\n\"; }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Subject subj;
    ConcreteObserver o1("Obs1"), o2("Obs2");
    subj.attach(&o1); subj.attach(&o2);
    subj.setState(42);
    return 0;
}
