class Solution {
public:
    int balancedStringSplit(string s) {
        int r_cnt=0,l_cnt=0,cnt=0;
        for(auto i:s){
            if(i=='L') l_cnt++;
            else if(i=='R') r_cnt++;
            if(r_cnt==l_cnt)cnt++;
        }
        return cnt;
    }
};