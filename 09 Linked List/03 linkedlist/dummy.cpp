#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>> arr,int target,int i,int j){
    if(i==arr.size()&&j==-1){
        cout<<"student not found"<<endl;
        return;
    }
    if(arr[i][j]==target){
        cout<<"Student found at index"<<i<<"    "<<j;
        return;
    }
    if(arr[i][j]>target)
        search(arr,target,i,j-1);
    else
    search(arr,target,i+1,j);
}
int main() {
    int N, target;
    cout << "Enter the size of the matrix (N): ";
    cin >> N;
    
    vector<vector<int>> arr;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        vector<int> a;
        int num;
        for (int j = 0; j < N; j++) {
            cin >>num;
            a.push_back(num);
        }
        arr.push_back(a);
    }
    
    cout << "Enter the target enrolment number: ";
    cin >> target;

    search(arr,target,0,arr.size()-1);
    return 0;
}






