class Solution {
public:
    int trap(vector<int>& h) {
               int count=0;
            int l=0,r=h.size()-1;
            int lmax=INT_MIN;
            int rmax=INT_MIN;
            while(l<r)
            {
                lmax=max(lmax,h[l]);
                rmax=max(rmax,h[r]);
                count+=(lmax<rmax)?lmax-h[l++]:rmax-h[r--];
            }
            return count;
    }
};