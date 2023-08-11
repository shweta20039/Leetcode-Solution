class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[j])
            {
                
            j++;
                nums[j]=nums[i];
                count++;
            }
        }
        return count+1;
    }
};
