class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        vector<int>fr1(26,0);
        vector<int>fr2(26,0);

        for(char c:word1)
        {
            fr1[c-'a']++;
        }
        for(char c:word2)
        {
            fr2[c-'a']++;
        }
            for(int i=0;i<26;i++)
            {
                if((fr1[i]==0 && fr2[i]!=0) || (fr1[i]!=0 && fr2[i]==0) ) return false;
            }
        //Operation1 ::  alphabet used in word1 should be equall to alphabet used in word2


        sort(fr1.begin(),fr1.end());
        sort(fr2.begin(),fr2.end());
        for(int i=0;i<26;i++)
        {
            if(fr1[i]!=fr2[i]) return false;
        }
        //operation2 :: here we checked the frequency of word1 alphabet should be equall to the frequency of word2 alphabet 
        return true;
    }
};