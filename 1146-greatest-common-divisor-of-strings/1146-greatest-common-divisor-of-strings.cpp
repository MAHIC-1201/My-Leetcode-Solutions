class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1=str1.length();
        int len2=str2.length();
        string s="";
        int length=gcd(len1,len2);
        
        for(int i=0;i<length;i++)
        {
            s+=str2[i];
        }
        for(int i=0;i<len1;i++)
        {

            if(str1[i]!=s[i%length] )
            {
                return "";
            }
        }
        for(int i=0;i<len2;i++)
        {

            if(str2[i]!=s[i%length] )
            {
                return "";
            }
        }
        
        return s;


    }
};