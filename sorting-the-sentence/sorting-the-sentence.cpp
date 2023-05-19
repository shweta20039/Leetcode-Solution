class Solution {
public:
    string sortSentence(string s) {
     
        map<int,string>m;
        string ans="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(int(s[i])<58 && s[i]!=' '){
                m[s[i]]=s.substr(j,i-j);
                j=i+2;
            }
        }
        for(auto x:m){
            ans+=x.second;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};