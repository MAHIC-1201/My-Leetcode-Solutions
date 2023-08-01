class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length=nums.size();
        vector<int>prefix(length,1);
        vector<int>suffix(length,1);
        int pm=1,sm=1;
        for(int i=0;i<length;i++)
        {
            prefix[i]*=pm;
            pm=pm*nums[i];
        }
        for(int i=length-1; i>=0 ;i--)
        {
            prefix[i]*=sm;
            sm=sm*nums[i];
        }
         
        return prefix;

    }
};