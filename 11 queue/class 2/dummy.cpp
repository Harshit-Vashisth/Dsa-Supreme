#include<bits/stdc++.h>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
}
void reverse(queue<int>& q){
    if(q.empty())
        return;
    int num=q.front();
    q.pop();
    reverse(q);
    q.push(num);
}
int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(4);
    q.push(2);
    q.push(8);
    print(q);

}