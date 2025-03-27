class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int min;
        for(int i=0;i<nums.size();i++)
        {
            min=target-nums[i];
            if(mp.count(min))
            {
                return{i,mp[min]};
            }
            mp[nums[i]]=i;
            
        }
        return{};
    }
};