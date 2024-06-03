class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n=citations.size();
        int curr=0;
        // if(n==1){
        //     if(citations[0]!=0) return 1;
        //     else return 0;
        // }
        for(int i=0;i<n;i++){
            if(citations[i]>=n-i){
                cout<<citations[i]<<endl;
                // curr=max(curr, citations[i]);    
                curr=n-i;
                break;
            }
        }
        return curr;
    }
};