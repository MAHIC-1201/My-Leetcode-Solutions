class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int length=nums.size();
        int first=INT_MAX;
        int second=INT_MAX;
        for(int i=0;i<length;i++)
        {
            if(nums[i]<=first)
            {
                first=nums[i];
            }
            else if(nums[i]<=second)
            {
                second=nums[i];
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};