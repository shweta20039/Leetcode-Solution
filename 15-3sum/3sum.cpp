class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());

        int n=nums.size();

      for(int i=0;i<n;i++)
      {
           if (i > 0 && nums[i] == nums[i - 1]) continue; 
          int l=i+1;
          int r=n-1;
          while(l<r)
          {
            int a=nums[i]+nums[l]+nums[r];
            if(a==0) 
            {
                ans.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1]) l++;
                while(l<r && nums[r]==nums[r-1]) r--;
                l++;
                r--;
            }
            else if(a<0) l++;
            else
            {
            r--;
            }
          }  
      }  
      return ans;
    }
};