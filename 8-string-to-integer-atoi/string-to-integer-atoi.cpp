class Solution {
public:

    long long fun(string s, int sign, int i,long long ans)
    {
        if(sign*ans>=INT_MAX) return INT_MAX;
        if(sign*ans<=INT_MIN) return INT_MIN;
        if(s[i]==' '|| !isdigit(s[i])) return ans*sign;
    
        int sol=s[i]-'0';
        return fun(s,sign,i+1,ans*10+sol);
        

    }
    int myAtoi(string s) {
        int sign=1;
        int i=0;
        int flag=0;
        while(s[i]==' ' && i<s.size()) i++;

        if(s[i]=='-')
        {
            i++;
            sign=-1;
            flag++;
        }
        
        if(s[i]=='+')
        {
            i++;
            sign=1;
            flag++;
        }
        if(flag>1) return 0;
           return fun(s,sign,i,0);
    }
};