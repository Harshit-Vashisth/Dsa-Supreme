#include<bits/stdc++.h>
using namespace std;

void solve(string s ) {
    int arr[26]={0};
    string ans;
    queue<char> q;
    for(int i =0;i<s.size();i++){
        char ch=s[i];
        q.push(ch);
        arr[ch-'a']++;
        while(!q.empty()){
            if(arr[q.front()-'a']>1)
                q.pop();
            else    
                ans.push_back(arr[q.front()]);
        }
        if(q.empty())
            ans.push_back('#');
    }
    cout<<ans;
}
int main() {
  string s="aabcdef";
  
  solve(s);
  return 0;
}