class Solution {
public:
    bool isPalindrome(long long x) {
        long long num=x;
        long long digit=0,sum=0;
        while(x!=0){
            digit=x%10;
            x=x/10;
            sum=sum*10+digit;
        }
        if(sum==num && num>=0)
            return true;
        else
            return false;
        
    }
};