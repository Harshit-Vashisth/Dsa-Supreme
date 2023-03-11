 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    vector<int> arr={10,1,7,6,14,9};
    int n=arr.size();
    for(int i=1;i<n;i++){         ///   i=0;i<=n  and j=0 j<n-i-1
        for(int j=0;j<n-i;j++) //harr turn me last index sorted hota h na re
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
     for(auto i:v)
    cout<<i<<" ";
 }