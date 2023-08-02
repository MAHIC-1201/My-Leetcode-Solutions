class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length=nums.size();
  
        sort(nums.begin(), nums.end());
        if(length==1)
        {
            return nums[0];
        }
        if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        
        for(int i=1;i<length-1;i++)
        {
            
            if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
            {
                return nums[i];
            }
            
        }
        return nums[length-1];
    }
};