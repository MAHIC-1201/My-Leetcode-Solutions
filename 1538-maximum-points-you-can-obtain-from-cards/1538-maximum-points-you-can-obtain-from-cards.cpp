class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int length=cardPoints.size();
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        int maximum=sum;
        int j=length-1;
        for(int i=k-1;i>=0;i--)
        {
            
            sum-=cardPoints[i];
            sum+=cardPoints[j];
            maximum=max(maximum,sum);
            j--;
        }
        return maximum;
    }
};