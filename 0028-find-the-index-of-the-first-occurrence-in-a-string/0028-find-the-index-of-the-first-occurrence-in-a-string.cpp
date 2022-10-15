class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int k=0,p=0;
        
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[k]){
                k++;
            }
            else{
                k=0; 
                i=p;
                p++;
            }
            
            if(k==needle.length()){
                return i+1-k;
            }
        }
        
        return -1;
        
    }
};