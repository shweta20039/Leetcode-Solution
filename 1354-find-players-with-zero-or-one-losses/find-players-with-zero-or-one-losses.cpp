class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        vector<int>zero,one;
        for(auto a:matches)
        {
            if(!mp.count(a[0]))
            {
                mp[a[0]]=0;
            }
              mp[a[1]]++;
            
        }

        for(auto[k,l]:mp)
        {
            if(l==0) zero.push_back(k);
            if(l==1) one.push_back(k);
        }
        return{zero,one};
    }
};