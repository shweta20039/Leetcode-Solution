class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>ro,co;
       int n=matrix.size();
       int m=matrix[0].size();
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(matrix[i][j]==0)
               {
                   ro.push_back(i);
                   co.push_back(j);
               }
           }
       } 

        for(int i=0;i<ro.size();i++)
       {
           for(int j=0;j<m;j++)
           {
               matrix[ro[i]][j]=0;
           }
       } 
            for(int i=0;i<co.size();i++)
       {
           for(int j=0;j<n;j++)
           {
               matrix[j][co[i]]=0;
           }
       } 

    }
};