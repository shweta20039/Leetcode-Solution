class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<=nums.size();i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(mp[i]==2) 
            {
                ans.push_back(i);
            }
        }
    return ans;
    }
};