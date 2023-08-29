class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>>ans;

        for(int i=0;i<num;i++)
        {
            ans.push_back(vector<int>(i+1));
            ans[i][i]=1;
            ans[i][0]=1;

            for(int j=1;j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
            
        }
        return ans;
    }
};

