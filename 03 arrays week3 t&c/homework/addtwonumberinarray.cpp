class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry=0,i=n-1,j=m-1;
    
    string ans;
    while(i>=0&&j>=0){
        int x=a[i]+b[j]+carry;
        int dig=x%10;
        ans.push_back(dig+'0');
        carry=x/10;
        i--;j--;
    }
    while(i>=0){
        int x=a[i]+carry;
        int dig=x%10;
        ans.push_back(dig+'0');
        carry=x/10;
        i--;
    }
    while(j>=0){
        int x=b[j]+carry;
        int dig=x%10;
        ans.push_back(dig+'0');
        carry=x/10;
        j--;
    }
   if(carry){
       ans.push_back(carry+'0');
   }
   
   while(ans[ans.size()-1]=='0')
   ans.pop_back();
   
   reverse(ans.begin(),ans.end());
   return ans;
    }
};