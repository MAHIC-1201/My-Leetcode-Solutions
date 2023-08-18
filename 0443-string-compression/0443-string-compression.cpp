class Solution {
public:
    int compress(vector<char>& chars) {
        
        int c=1;
        string s="";
        int length=chars.size();
        int i=1;
        char x=chars[0];
        while(i<length)
        { 
            if(chars[i]!=x)
            {
                if(c==1)
                {
                    s+=x;
                }
                else{
                s+=x+to_string(c);
                }
                x=chars[i];
                c=1;
            }
            else{
                c++;
            }
           i++;
        }
        if(c==1)
        {
            s+=x;
        }
        else{
            s+=x+to_string(c);
        }

        i=0;
        chars={};
        while(s[i]!='\0')
        {
            chars.push_back(s[i]);
            i++;
        }
        return chars.size();
    }
};