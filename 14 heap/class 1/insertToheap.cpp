#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        size=0;
    }
    void insert(int value){
        size=size+1;
        int index=size;
        arr[index]=value;
        while(index>1){
            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else break;
        }
    }
};
int main(){
    Heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=45;
    h.size=5;
    cout<<"printing the array"<<endl;
    for(int i=0;i<=h.size;i++)
        cout<<h.arr[i]<<" ";
}