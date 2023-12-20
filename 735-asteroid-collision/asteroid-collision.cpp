class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int>st;
        vector<int>result;
        int n=as.size();
       int diff=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && as[i]<0 && st.top()>0)
            {
               // diff=0;
                diff=as[i]+st.top();
                if(diff<0) st.pop();
                else if(diff==0)
                {
                    st.pop();
                    as[i]=0;
                    break;
                }
                else
                { as[i]=0;
                break;
                }
            }
             
        if(as[i]!=0) 
        {
             st.push(as[i]);
        }
        }
        while(!st.empty())
        { result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
                