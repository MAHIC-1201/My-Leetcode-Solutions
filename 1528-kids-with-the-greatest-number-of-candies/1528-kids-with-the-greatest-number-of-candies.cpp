class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max= candies[0];
        int length=candies.size();
        cout<<length;
        vector<bool>result(length,0);
        for(int i=0;i<length;i++)
        {
            if(candies[i]>=max)
            {
                max=candies[i];
            }
        }
        for(int i=0;i<length;i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                result[i]=true;
            }
            else
            {
                result[i]=false;
            }
        }
        return result;
        
    }
};