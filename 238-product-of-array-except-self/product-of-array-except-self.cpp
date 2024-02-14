class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        int suf=1,re=1;
        int n=nums.size();
        vector<int>pree(n);
        vector<int>ans;
        vector<int>suff(n);
        pree[0] = nums[0];
        for(int i=1;i<n;i++)
        {
            // pre*=nums[i];
            // pree.push_back(pre);
            pree[i] = pree[i-1] * nums[i];
        }
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=1;i--)
        {
            // suf*=nums[i];
            // suff.push_back(suf);
            suff[i]=suff[i+1]*nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(i==0) ans.push_back(suff[i+1]);
            else if(i==n-1) ans.push_back(pree[n-2]);
            else
            {
            re=suff[i+1]*pree[i-1];
            
            ans.push_back(re);
            }
           
        }
        return ans;
    }
};