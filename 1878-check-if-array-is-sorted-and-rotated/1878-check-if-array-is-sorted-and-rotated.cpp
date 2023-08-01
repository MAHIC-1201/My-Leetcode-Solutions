class Solution {
public:
    bool check(vector<int>& nums) {
        int length=nums.size();
        int c=0;
        for(int i=0;i<length-1;i++)
        {
            if(nums[i]>nums[i+1] )
            {
                c++;
            }
        }
        if(nums[0]>=nums[length-1] && c==1)
        {
            return true;
        }
        if(c==0)
        {
            return true;
        }
        return false;
    }
};