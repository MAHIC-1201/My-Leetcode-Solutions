class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        vector<int>elements;
        for(int i=0;i<=nums.size();i++){
            xor1^=i;
        }
        int xor2=0;
        for(auto it:nums){
            xor2^=it;
        }
        return xor1^xor2;



    }
};