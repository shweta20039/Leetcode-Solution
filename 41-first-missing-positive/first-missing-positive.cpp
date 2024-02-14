class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=1;i<=nums.size();i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0) 
            {
               return i;
               break;
            }
        }
        sort(nums.begin(),nums.end());
        return n+1;
        
    
    }
};