class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(int i=0;i<nums.size();i++) 
    {
        pq.push({nums[i],i});
    }
        while(!pq.empty() && k!=0)
        {
            v.push_back(pq.top().second);
            pq.pop();
            k--;;
        }
        sort(begin(v),end(v));
        for(int i=0;i<v.size();i++)
        {
            v[i]= nums[v[i]];
        }
        return v;
    }
};


