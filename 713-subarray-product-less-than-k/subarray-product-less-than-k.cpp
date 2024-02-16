class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long pro=1;
        int count=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            pro=nums[i];
            j=i+1;
            if(nums[i]<k) count++;
            while(j<nums.size())
            {
                pro*=nums[j];
                j++;
                if(pro>k) break;
                if(pro<k) count++;
            }
        }
        return count;
    }
};
