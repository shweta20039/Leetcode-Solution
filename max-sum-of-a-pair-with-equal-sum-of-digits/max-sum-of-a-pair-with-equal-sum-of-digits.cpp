class Solution {
public:
int sum(int n)
{
    int ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
    
    int maximumSum(vector<int>& nums) {
        
        unordered_map<int,priority_queue<int>>mp;
        for(auto i:nums)
        {
            mp[sum(i)].push(i);
        }
        int maxi=-1;
        for(auto i:mp)
        {
            if(i.second.size()>=2)
            {
                int a=i.second.top();
                i.second.pop();
                int b=i.second.top();
                i.second.pop();
                maxi=max(a+b,maxi);
            }
        }
        return maxi;
    }
};