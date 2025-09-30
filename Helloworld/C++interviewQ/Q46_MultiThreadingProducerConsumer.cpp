/*
Question 46: Q46_MultiThreadingProducerConsumer
Description: Producer-consumer using condition_variable and mutex.

Solution: Detailed, self-contained C++ program with explanation comments.
Build: g++ -std=c++17 Q46_MultiThreadingProducerConsumer.cpp -O2 -Wall -o Q46_MultiThreadingProducerConsumer
Run: ./Q46_MultiThreadingProducerConsumer
*/

#include <bits/stdc++.h>
using namespace std;
mutex m;
condition_variable cv;
queue<int> q;
const int MAXQ = 5;
bool finished = false;
void producer(int id, int count){
    for(int i=0;i<count;i++){
        unique_lock<mutex> lk(m);
        cv.wait(lk, []{ return q.size() < MAXQ; });
        q.push(i + id*100);
        cout<<"Produced "<<q.back()<<"\n";
        lk.unlock(); cv.notify_all();
    }
}
void consumer(int id){
    while(true){
        unique_lock<mutex> lk(m);
        cv.wait(lk, []{ return !q.empty() || finished; });
        if(q.empty() && finished) break;
        int v = q.front(); q.pop();
        cout<<"Consumer "<<id<<" got "<<v<<"\n";
        lk.unlock(); cv.notify_all();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    thread p1(producer,1,10), p2(producer,2,10);
    thread c1(consumer,1), c2(consumer,2);
    p1.join(); p2.join();
    {
        unique_lock<mutex> lk(m); finished=true; lk.unlock(); cv.notify_all();
    }
    c1.join(); c2.join();
    return 0;
}
