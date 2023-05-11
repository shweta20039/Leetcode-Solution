class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        int n=nums.size();
        for(int i=0;i<n;i++) pq.push(nums[i]);
        int j=1;
        while(j<k)
        {
            pq.pop();
            j++;
        }
        int ans=0;
        ans=pq.top();
        return ans;
    }
};

