#include<bits/stdc++.h>
using namespace std;

void solve(string s ) {
    int arr[26]={0};
    string ans;
    queue<char> q;
    for(int i =0;i<s.length();i++){
        char ch=s[i];
        q.push(ch);
        arr[ch-'a']++;
        while(!q.empty()){
            if(arr[q.front()-'a']>1)
                q.pop();
            else    {
                ans.push_back(q.front());
                break;
                }
        }
        if(q.empty())
            ans.push_back('#');
    }
    cout<<ans;
}
int main() {
  string s="aabbcc";
  
  solve(s);
  return 0;
}