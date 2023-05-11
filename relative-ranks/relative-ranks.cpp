class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
            priority_queue<pair<int,int>>pq;
            vector<string>ans(n);
            for(int i=0;i<n;i++)
            {
                pq.push({score[i],i});
            }
        int j=1;
        while(!pq.empty())
        {
            if(j==1) ans[pq.top().second]="Gold Medal";
            if(j==2) ans[pq.top().second]="Silver Medal";
            if(j==3) ans[pq.top().second]="Bronze Medal";
            else if(j>3) ans[pq.top().second]=to_string(j);
            j++;
           pq.pop();
        }

        return ans;
    }
};
