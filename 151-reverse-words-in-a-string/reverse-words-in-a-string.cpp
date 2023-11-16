class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans="";
        stack<string>stac;
        int n=s.size();
        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            int j=i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
         if(i<n)
         {
            ans=s.substr(i,j-i);
            stac.push(ans);
         }   
            
            i=j+1;
        }
        string st="";
        while(!stac.empty())
        {
            st+=(stac.top()+" ");
            stac.pop();
        }
       st.pop_back();
        return st;
    }
};