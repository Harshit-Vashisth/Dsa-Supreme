#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop(); 
    cout<<q.front()<<endl;
    q.pop();
    if(q.empty())
    cout<<"Queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;
    cout<<q.size();
}