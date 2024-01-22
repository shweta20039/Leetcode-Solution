class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;

        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (mp[i] == 2) {
                a = i;
            }
            if (mp[i] == 0) {
                b = i;
            }
        }
        return {a, b};
    }
};