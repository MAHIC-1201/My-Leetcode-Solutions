class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_set<int> s1;
        unordered_set<int> s2;
        vector<vector<int>> answer(2);
        for(int i=0;i<n1;i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++)
        {
            s2.insert(nums2[i]);
        }
        for(auto it:s1)
        {
            if(s2.find(it)==s2.end())
            {
                answer[0].push_back(it);
            }
        }
        for(auto it:s2)
        {
            if(s1.find(it)==s1.end())
            {
                answer[1].push_back(it);
            }
        }
        return answer;
    }
};