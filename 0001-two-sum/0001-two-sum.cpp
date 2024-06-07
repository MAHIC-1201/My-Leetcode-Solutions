class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i+1;j<n;j++){
                sum=a[i]+a[j];
                if(sum==target){
                    return {i,j};
                }

            }
        }
        return {};
          
    }
};