#include<bits/stdc++.h>
using namespace std;
struct points{
    public:
    int x,y;
    points(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<x<<"v "<<y;
        }
};
double ecludian(points p){
    return sqrt(((p.x-0)*(p.x-0))+((p.y-0)*(p.y-0)));
}
// finding the kth shortest distance 
double merge(vector<points> p,int mindis,int s,int e){
    if(p.size()==1)
    return ecludian(p[0]);
    int mid=s+(e-s)/2;
    double d1=merge(p,mindis,s,mid);
      double d2=merge(p,mindis,mid,e);
      return min(d1,d2);
}
int main(){
    int n ;
    cout<<"Enter the number of the point";
    cin>>n;
    int x, y;
    vector<points> p;
    for(int i =0;i<n;i++){
        cout<<"Enter the points for the point numnber"<<i+1;
        cin>>x>>y;    
        // Add the point to the vector
        p.emplace_back(x, y);
    }
    sort(p.begin(),p.end());
    
    int k=0;
        cout<<"Enter the value of the k points which you wanna search"<<endl;
        cin>>k;
        cout<<merge(p,INT_MAX,0,n);
    }
