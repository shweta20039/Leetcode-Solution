class Solution {
public:
string str= "";
   void par(vector<string>&ans ,int open ,int close)
    {
        
        if(open==0 && close==0) 
        {
            ans.push_back(str);
            return;
        }
        if(open>0)
        {
            str+="(";
            par(ans,open-1,close);
            str=str.substr(0,str.size()-1);
        }
        if(close>open)
        {
            str+=")";
            par(ans,open,close-1);
            str=str.substr(0,str.size()-1);
        }
    }


    vector<string> generateParenthesis(int n) {
               vector<string>ans;
               int open=n;
               int close=n;
               par(ans,open,close);
               return ans;    

    }
};