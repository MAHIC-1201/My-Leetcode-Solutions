class Solution {
public:
    void sortColors(vector<int>& a) {
        int cz=0, cone=0, ctwo=0;
        for(auto it:a){
            if(it==0) cz++;
            else if(it==1) cone++;
            else ctwo++;
        }
        for(int i=0;i<cz;i++){
            a[i]=0;
        }
        for(int i=cz;i<cz+cone;i++){
            a[i]=1;
        }
        for(int i=cz+cone;i<a.size();i++){
            a[i]=2;
        }

    
    }
};