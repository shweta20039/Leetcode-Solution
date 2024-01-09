class Solution {
public:
        void fun(vector<vector<int>>&ans, vector<int>&nums , vector<int>&temp,int index)
        {
            ans.push_back(temp);
            for(int i=index;i<nums.size();++i)
            {
                temp.push_back(nums[i]);
                fun(ans,nums,temp,i+1);
                temp.pop_back();
            }
        }



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        fun(ans,nums,temp,0);
        return ans;


    }
};

