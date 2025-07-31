class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       if(m==0) nums1=nums2;
       else if(n==0) {}
       else {
        vector<int>merged(m+n, 0);
        int i=0, j=0, k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                merged[k]=nums1[i];
                k++;
                i++;
            }
            else if(nums1[i]>nums2[j]){
                merged[k]=nums2[j];
                k++;
                j++;
            }
            else{
                merged[k]=nums2[j];
                k++;
                j++;
            }
        }
        if(j<n){
            while(j<n){
                merged[k]=nums2[j];
                k++;
                j++;
            }
        }
        else if(i<m){
            while(i<m){
                merged[k]=nums1[i];
                k++;
                i++;
            }
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=merged[i];
        }
        

       }
       
       
    }
};