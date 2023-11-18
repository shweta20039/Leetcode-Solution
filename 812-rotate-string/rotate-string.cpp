class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
            string ans;
            queue<string>q;
            int t=0;
            for(int i=0;i<goal.length();i++)
            {
                q.push(goal.substr(i) + goal.substr(0, i));
                
            }
        for(int i=0;i<goal.size();i++)
        {
            ans=q.front();
                q.pop();
                q.push(ans);
                if(ans==s)
                {
                   return true;
                }
        }
       return false;
    }
};
       


       