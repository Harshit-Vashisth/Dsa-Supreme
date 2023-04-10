#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int a=10;
    public:
    int b=20;
    protected:
    int c=30;
};

class B:public A{

};

class B : public B{

};