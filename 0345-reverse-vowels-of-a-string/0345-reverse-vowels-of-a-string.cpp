class Solution {
public:
    bool isvowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I'|| c=='O' || c=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int length=s.length();
        int start=0;
        int end=length-1;
        while(start<end)
        {
            if(isvowel(s[start]) && isvowel(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(isvowel(s[start]))
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return s;

    }
    
};