class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int ne=1,p=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0) 
            {
                arr[p]=nums[i];
                p=p+2;
            }
            else
            if(nums[i]<0)
            {
                 arr[ne]=nums[i];
                ne=ne+2;
            }

        }
        return arr;
    }
};