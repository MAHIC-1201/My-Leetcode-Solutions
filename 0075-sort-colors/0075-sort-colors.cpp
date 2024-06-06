class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length=nums.size();
        int n=nums.size();
        while(length!=1){
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    swap(nums[i], nums[i+1]);
                }
            }
            length--;
        }
    
    }
};