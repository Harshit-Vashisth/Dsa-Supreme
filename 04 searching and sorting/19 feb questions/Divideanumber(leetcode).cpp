class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int s=1,e=abs(dividend),mid=0,ans=0;
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX;
        }
          if (divisor == 0 || (dividend == INT_MIN && divisor == 1)) 
            return INT_MIN;
        
        while(s<=e){
            mid=s+(e-s)/2;
            if(abs(divisor*mid)==abs(dividend))
            {
                ans=mid;
                break;
            }
            else if(abs(divisor*mid)>abs(dividend))
            e=mid-1;
            else
            {
                ans=mid;
                s=mid+1;
            }
        }
        if((divisor>0&&dividend>0)||(divisor<0&&dividend<0))
        return ans;
        else
        return ans*-1;
    }
};