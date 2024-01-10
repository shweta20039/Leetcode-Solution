class Solution {
public:



    void ca(vector<int>& candidates, int target,int index,vector<int>&ds,vector<vector<int>>&ans)
    {
        
        //base case
        if(index==candidates.size())
        {
            if(target==0) 
            {ans.push_back(ds);}
            return;
        }

        if(candidates[index]<=target)
        {
            ds.push_back(candidates[index]);
            ca(candidates,target-candidates[index],index,ds,ans);
            ds.pop_back();
        }
        
        
            ca(candidates,target,index+1,ds,ans);
        
        
    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        ca(candidates,target,0,ds,ans);
        return ans;

    }
};

