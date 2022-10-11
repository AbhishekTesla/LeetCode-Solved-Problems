class Solution {
public:
    int reverse(int x) {
        
        int num=x,digit=0,sum=0,overflow=0;
        
       
        
        while(x!=0){
            digit=x%10;
            x=x/10;
            
            if(sum>INT_MAX/10 || sum==INT_MAX && digit>7)
            {
                overflow=1;
                break;
            }
            
            if(sum<INT_MIN/10 || sum==INT_MIN && digit<-8)
            {
                overflow=1;
                break;
            }
            
            
            
            
            sum=sum*10+digit;
        }
        
        if(overflow==1)
            return 0;
        else
            return sum;
        
       
       
        
    }
};