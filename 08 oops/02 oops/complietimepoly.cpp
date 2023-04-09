#include<bits/stdc++.h>
using namespace std;

class Math{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
    int sum(int a, float b){
        return a+b;
    }
    int sum(int a, double b){
        return a+b;
    }
};
int main(){
    Math* m=new Math();
    cout<<m->sum(4,5)<<endl;
    cout<<m->sum(4,5,8)<<endl;
    cout<<m->sum(4,4.3f)<<endl;
    cout<<m->sum(4,5.23)<<endl;

}