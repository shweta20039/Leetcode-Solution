class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int currmax=0;

       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='(')
           {
               currmax++;
           }
           else if(s[i]==')')
           {
               currmax--;
           }
           maxi=max(maxi,currmax);
       } 
       return maxi;
    }
};