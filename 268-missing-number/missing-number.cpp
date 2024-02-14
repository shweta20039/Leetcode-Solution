class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,tsum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            tsum+=i;
        }
        tsum+=nums.size();
        return ans=tsum-sum;
         

    }
};