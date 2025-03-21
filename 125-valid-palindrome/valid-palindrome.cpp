class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                s1+=tolower(s[i]);
            }
        }
        string temp=s1;
        reverse(s1.begin(),s1.end());
        if(temp==s1) return true;
        else return false;
    }
};
//isalnum()== this tell you about number and alpha
//tolower()== lower the capital letter
