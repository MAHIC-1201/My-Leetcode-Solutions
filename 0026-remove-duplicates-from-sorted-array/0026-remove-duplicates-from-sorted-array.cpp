class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
            }
        }
        int indx=0;
        for(auto it:st){
            nums[indx]=it;
            indx++;
        }
        return st.size();

    }
};