class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,up=0;
        int right=m-1;
        int down=n-1;
        while(ans.size()<n*m)
        {
            for(int i=left;i<=right && ans.size()<n*m;i++ ) ans.push_back(matrix[up][i]);
            for(int i=up+1;i<=down-1 && ans.size()<n*m;i++ ) ans.push_back(matrix[i][right]);
            for(int i=right;i>=left && ans.size()<n*m;i--) ans.push_back(matrix[down][i]);
            for(int i=down-1;i>=up+1 && ans.size()<n*m;i--) ans.push_back(matrix[i][left]);
            left++;
            right--;
            down--;
            up++;

        }
        return ans;
    }
};