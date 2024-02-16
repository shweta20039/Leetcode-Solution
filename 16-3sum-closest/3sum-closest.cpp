class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int re=0,sum=0,mini=INT_MAX,final=0;
          int n=nums.size(); 
          sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                sum=nums[i]+nums[l]+nums[r];
                if(sum==target) return target;
                 //final=abs(sum-target);
                else if(abs(mini)>abs(sum-target))
                    {
                        mini=sum-target;
                        re=sum;
                    }


                 
                if(sum<target) l++;
                else r--;
            }
        }
            return re;

    }
};