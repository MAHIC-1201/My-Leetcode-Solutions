class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(); 
        vector<int>arr;
        k=k%n;
        for(int i=n-k;i<=n-1;i++)
        {
            arr.push_back(nums[i]);
        }
 
        for(int j=n-1;j>=k;j--)
        {
            nums[j]=nums[j-k];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=arr[i];
        }
            
        
        
    }
};