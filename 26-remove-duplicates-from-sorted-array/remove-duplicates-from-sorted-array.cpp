
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(int num:nums)
        {
            m1[num]++;
        }
        nums.clear();
        
        for(auto n:m1)
        {
            nums.push_back(n.first);
        }
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};
