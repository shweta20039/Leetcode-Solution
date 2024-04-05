class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int minus=target-nums[i];
            if(mp.count(minus))
            {
                return{i,mp[minus]};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};