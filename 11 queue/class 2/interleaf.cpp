#include<bits/stdc++.h>
using namespace std;
void interleaf(queue<int> &q){
     int n=q.size();
     int k=n/2;
     queue<int> q2;
     int c=0;
     while(!q.empty()&&c!=k){
        int ele=q.front();
        q.pop();
        q2.push(ele);
        c++;
     }
     while(!q.empty()&&!q2.empty())
     {
        int ele=q2.front();
        q2.pop();
        q.push(ele);
        ele=q.front();
        q.pop();
        q.push(ele);
     }
     if(n&1){
        int ele=q.front();
        q.pop();
        q.push(ele);
     }
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
    //cout<<q.front()<<endl;
    interleaf(q);
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
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
}