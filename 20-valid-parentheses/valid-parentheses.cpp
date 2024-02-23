class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if( st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
            {
                return false;
            }
            else if( s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(!st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
            {
                if(s[i]==')' && st.top()=='(' || s[i]=='}' && st.top()=='{' || s[i]==']' && st.top()=='[')
                {
                    st.pop();
                }
                else{
                    return false;
                }
                
            }
             if(st.empty() && s.size()-1==i) return true;
            else if(!st.empty() && s.size()-1==i) return false;
        }
            return false;
    }
};
