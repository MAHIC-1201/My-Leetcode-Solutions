class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int length=nums.size();
        vector<int>answer(length,0);
        vector<int>positive;
        vector<int>negative;
        for(int i=0;i<length;i++)
        {
            if(nums[i]>0)
            {
                positive.push_back(nums[i]);
            }
            else
            {
                negative.push_back(nums[i]);
            }
           
        }
        int j=0;
        for(int i=0;i<length;i=i+2)
        {
            answer[i]=positive[j];
            answer[i+1]=negative[j];
            j++;
        }
        return answer;
        
    }
};