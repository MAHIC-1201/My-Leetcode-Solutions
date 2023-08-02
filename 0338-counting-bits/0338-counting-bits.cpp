class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        int c=0;
        for(int i=0;i<=n;i++)
        {
            if(i==0)
            {
                ans[i]=0;
            }
            int j=i;
            while(j!=0)
            {
                if(j%2==1)
                {
                    c++;
                }
                j=j/2;  
            }
            
            ans[i]=c;
            c=0;
        }
        return ans;
    }
};