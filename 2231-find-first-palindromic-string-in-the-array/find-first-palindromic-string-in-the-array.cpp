class Solution {
public:

    bool pala(string w)
    {
        
        int n=w.size();
        for(int i=0;i<n/2;i++)
        {
            if(w[i]!=w[n-1-i]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++)
        {
            if(pala(words[i])==true)
            {
                return words[i];
               
            }

        }
        return "";
    }
};
