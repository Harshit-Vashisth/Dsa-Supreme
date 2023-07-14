#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isterminal;
    TrieNode(char c){
        data=c;
        for(int i=0;i<26;i++)
            children[i]=NULL;
        isterminal=false;
    }
};
void insert(TrieNode* root,string str){
    if(str.length()==0){
        root->isterminal=true;
        return ;
    }
    TrieNode* child;
    char c=str[0];
    int index=c-'a';
    if(root->children[index]!=NULL)
        child=root->children[index];
    else{
        child=new TrieNode(c);
        root->children[index]=child;
    }
    insert(child,str.substr(1));
}

bool search(TrieNode* root,string s){
    if(s.length()==0)
        return root->isterminal;
    char ch= s[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index]!=NULL)
        child=root->children[index];
    else{
        return false;
    }
    return search(child,s.substr(1));
}
int main(){
    TrieNode* root=new TrieNode('-');
    string s="coding";
    insert(root,s);
    cout<<"Inserted";
    cout<<search(root,s);
}
