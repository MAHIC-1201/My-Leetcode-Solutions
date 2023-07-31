class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        const int length=flowerbed.size();
        int flowersplanted=0;
        if(n==0)
        {
            return true;
        }
        if(length==1 && flowerbed[0]==0)
        {
            return true;
        }
        if(length==1 && flowerbed[0]==1)
        {
            return false;
        }
        
        for(int i=0;i<length;i++)
        {
            if(i==0 && flowerbed[i]==0)
            {
                
                if(flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    flowersplanted++;
                }
                
            }
            
            else if(i==length-1 && flowerbed[i]==0)
            {
                if(flowerbed[i-1]==0)
                {
                    flowerbed[i]=1;
                    flowersplanted++;
                }
            }
            else if(flowerbed[i]==0)
            {
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    flowersplanted++;
                }
            }
        }
        if(flowersplanted>=n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};