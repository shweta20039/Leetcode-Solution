class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int k1=k;
        int count=0;
        int start=0,end=0;
        int mini=INT_MIN;
        while(end<nums.size())
        {
            if(nums[end]==1)
            {
                
                count++;
                end++;

            }
            else if(nums[end]==0 && k1>0)
            {
                count++;
                end++;
                k1--;
            }
          
            else
            {
                
                while(k1<1)
                {
                    if(nums[start]==1)
                    {
                        count--;
                        start++;
                    }
                    else
                    {
                        count--;
                        start++;
                        k1++;
                    }
                }
            }  mini=max(count,mini);
        }
        return mini;

    }
};