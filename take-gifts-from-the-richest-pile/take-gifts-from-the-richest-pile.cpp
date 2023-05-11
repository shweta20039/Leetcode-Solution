class Solution {
public:
    long long pickGifts(vector<int>& n, int k) {
        
        priority_queue<int>pq;
        long long sum=0;
        for(int i=0;i<n.size();i++) pq.push(n[i]);
       
            for(int j= 0;j<k;j++)
            {
                int top=pq.top();
                pq.pop();
               pq.push(sqrt(top));
               
            }

            while(!pq.empty())
            {
                sum+=pq.top();
                pq.pop();
            }
        return sum;
    }
 };