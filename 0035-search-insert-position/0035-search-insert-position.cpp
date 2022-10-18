class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int index=0,val=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target)
            {
             index++;
             val=index;
            }
            else if(nums[i]>target)
            {
                val=index;
                break;
            }
            else
            {
                val=index;
                break;
            }
        }
        
        return val;
        
        
        
        
        
        
        
    }
};