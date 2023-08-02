class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length=nums.size();
        int c=0;
        int result=0;
        for(int i=0;i<length;i++)
        {
            if(nums[i]==0)
            {
                c=0;
            }
            else
            {
                c++;
                result=max(result,c);
            }
        }
        return result;
    }
};