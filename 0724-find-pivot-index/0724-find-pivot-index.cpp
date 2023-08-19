class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int length=nums.size();
        int leftsum=0;
        int arrsum=0;
        int rightsum=0;
        for(int i=0;i<length;i++)
        {
            arrsum+=nums[i];
        }
        for(int i=0;i<length;i++)
        {
            rightsum=arrsum-nums[i];
            if(leftsum==rightsum)
            {
                return i;
            }
            else
            {
                leftsum+=nums[i];
                arrsum-=nums[i];
            }
            
        }
        return -1;
    }
};