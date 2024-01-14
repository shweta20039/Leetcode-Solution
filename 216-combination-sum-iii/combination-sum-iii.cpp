class Solution {
public:
            //n=target
    void fun(int in,int k,int n,vector<vector<int>>&ans,vector<int>&ds)
    {
        //basecase
        if(n==0 && ds.size()==k) 
        {
            ans.push_back(ds);
            return ;
        }
    if(ds.size()==k && n!=0) return;
        for(int i=in;i<=9;i++)
        {
            ds.push_back(i);
            fun(i+1,k,n-i,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        fun(1,k,n,ans,ds);
        return ans;
    }
 };