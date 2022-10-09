class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        map<int,int>index;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=0;
            
        }
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            index[nums[i]]=i;
        }
        
       for(int i=0;i<nums.size();i++){
            int ele = nums[i];
           
           if(mp[target-ele]==1 && target-ele==ele)
              continue;
           
           if(mp[target-ele]>=1)
              {
               vec.push_back(i);
               vec.push_back(index[target-ele]);
               break;
             }
           
        }
        
        return vec;
        
    }
        
    
};