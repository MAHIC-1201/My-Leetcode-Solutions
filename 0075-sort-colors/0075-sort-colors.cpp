class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length=nums.size();
        int temp;
        while(length!=1)
        {
            for(int i=0;i<length-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    temp=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;
                }
            }
            length--;
        }
        
        
    }
};