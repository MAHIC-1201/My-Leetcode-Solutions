class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_set<int>occurences;
        unordered_set<int>p;
        int c;
        for(int i=0;i<arr.size();i++)
        {
            p.insert(arr[i]);
        }
        for(int i:p)
        {
            c=count(arr.begin(),arr.end(),i);
            if(occurences.count(c)!=0)
            {
                return false;
            }
            else
            {
                occurences.insert(c);
            }
        }
        return true;

    }
};