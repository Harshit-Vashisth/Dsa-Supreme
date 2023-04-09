#include<bits/stdc++.h>
using namespace std;

class para{
    public:
    int val;
    void operator+(para& o2){
        int val1=this->val;
        int val2=this->val;
        cout<<val1-val2;
    }
};
int main(){
    para* o1,o2;
    o1.val=20;
    o2.val=10;
    o1+o2;
}