#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q){
    if(q.empty())
        return ;
    int ele=q.front();
    q.pop();
    reverse(q);
    q.push(ele);
}
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
    reverse(q);
    cout<<q.front()<<endl;
}