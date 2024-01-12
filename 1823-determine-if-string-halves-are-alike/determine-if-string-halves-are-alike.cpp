class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>cset={'a','e','i','o','u','A','E','I','O','U'};
        int cout=0;
        int  mid=s.length()/2;
        for(int i=0;i<mid;i++)
        {
            char s1=s[i];
            char s2=s[mid+i];
            if(cset.count(s1)) cout++;
            if(cset.count(s2)) cout--;
        }
        return cout == 0;
    }
};

// if(cset.count(s2)) cout--;