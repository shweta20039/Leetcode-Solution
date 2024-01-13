class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        int n=s.size();
        vector<int>fres(26,0);
        vector<int>fret(26,0);

        for(int i=0;i<n;i++)
        {
            fres[s[i]-'a']++;
            fret[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(fret[i]<fres[i])
            {
                count+=fres[i]-fret[i];
            }
        }
        return count;
    }
};

  