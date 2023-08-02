class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length=nums.size();
        int sumarr=0,sum=0,missing;
        for(int i=0;i<length;i++)
        {
            sumarr+=nums[i];
        }
        for(int i=0;i<=length;i++)
        {
            sum+=i;
        }
        missing=sum-sumarr;
        return missing;

    }
};