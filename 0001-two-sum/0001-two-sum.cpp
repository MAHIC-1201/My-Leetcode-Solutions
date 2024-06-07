class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>arr2(nums.size());
        copy(nums.begin(), nums.end(), arr2.begin());
        int n=nums.size();
        int i=0, j=n-1;
        sort(nums.begin(), nums.end());
        int num1,num2;
        while(i<j){
            if(nums[i]+nums[j]==target){
                num1=nums[i];
                num2=nums[j];
                break;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        cout<<num1<<num2<<endl;
        int indx1=0, indx2=0;
        for(int i=0;i<n;i++){
            if(arr2[i]==num1 && indx1==0){
                indx1=i;
            }
            else if(arr2[i]==num2){
                indx2=i;
            }
        }
        return {indx1, indx2};

          
    }
};