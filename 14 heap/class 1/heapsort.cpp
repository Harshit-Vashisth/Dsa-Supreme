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
    int deletion(){
        arr[1]=arr[size];
        int ans=arr[1];
        size--;
        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;
            int largest=index;
            if(left<=size&&arr[largest]<arr[left])
                largest=left;
            if(right<=size&&arr[largest]<arr[right])
                largest=right;
            if(largest==index){
                break;
            }
                else {
                    swap(arr[index],arr[largest]);
                index=largest;
                }
        }
        return ans;
    }
    void heapify(int arr[],int n ,int i){
        int index=i;
        int left=2*i;
        int largest=index;
        int right=left+1;
        if(left<=n&&arr[largest]<arr[left])
            largest=left;
        if(right<=n&&arr[largest]<arr[right])
            largest=right;
        if(index!=largest){
            swap(arr[index],arr[largest]);
            index=largest;
            heapify(arr,n,index);
    }
    }
    void heapSort(int arr[],int n){
        while(n!=1){
            swap(arr[1],arr[n]);
            n--;
            heapify(arr,n,1);
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
   h.heapSort(h.arr,h.size);
    cout<<" printing " <<endl;
    for(int i=0;i<=h.size;i++)
        cout<<h.arr[i]<<" ";
 
}