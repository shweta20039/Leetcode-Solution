class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
    vector<pair<int,char>>v;

        for(auto &i: s)
        {
            mp[i]++;
             
        }
        for(auto &i: mp)
        {
            v.emplace_back(make_pair(i.second,i.first));
        }
        sort(v.rbegin(),v.rend());
        string temp="";
        for(auto &i:v)
        {
        for(int j=0;j<i.first;j++)
        {
            temp+=i.second;
        }
        }
        return temp;
    }
};