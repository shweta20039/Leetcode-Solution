class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++) pq.push(piles[i]);
        while(k>0)
        {
            int a=pq.top();
            pq.pop();
            pq.push((a+1)/2);
            k--;
        }
        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
