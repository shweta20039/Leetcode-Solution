class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>que;
    int count=0;
    int j=0;
        for(int i=0;i<tickets.size();i++)
        {
            que.push(i);
            j+=tickets[i];
        }

        while(j>0)
        {
            if(tickets[k]==0) break;
           if(tickets[que.front()]>0){
            tickets[que.front()]--;
          que.push(que.front());
            que.pop();

            count++;
            j--;
           }
           else
           {
               que.pop();

           }
        }
        return count;
    }
};