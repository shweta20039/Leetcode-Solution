class Solution {
public:

//code will be in O(n+m)
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>x,y;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
    {
        for(int j=0 ;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }

        for(int i=0;i<x.size();i++)

        {
           for(int j=0;j<m;j++)
           {
               matrix[x[i]][j]=0;
           } 
        }

             for(int i=0;i<y.size();i++)

        {
           for(int j=0;j<n;j++)
           {
               matrix[j][y[i]]=0;
           } 
        }

        
    }
};